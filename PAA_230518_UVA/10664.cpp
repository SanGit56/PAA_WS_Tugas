#include <stdio.h>
#include <sstream>
#include <iostream>
using namespace std;

int main() {
	int testcase, i;
	scanf("%d", &testcase);
	getchar();

	for(i=1;i<=testcase;i++) {
		string baris;
		getline(cin, baris);
		istringstream isian(baris);
		
		int angka[50], jml_angka = 0, jml = 0;
		int i, j, tbl_hasil[101];
		
		while(isian>>angka[jml_angka]){		//membaca int dari str
			jml += angka[jml_angka];	//menjumlahkan angka dalam isian
			jml_angka++;	//menghitung jumlah angka dalam isian
		}
		
		tbl_hasil[0] = 1;
		
		//solusi dynamic programming
		if(jml%2 == 0) {
			jml /= 2;
			
			//mengecek ulang apakah bisa dibagi rata
			for(i = 0; i < jml_angka; i++) { 
				for(j = jml; j >= angka[i]; j--) {
					if(tbl_hasil[j-angka[i]]) {
						tbl_hasil[j] = 1;
					}
				}	
			} 
		}
		
		if(tbl_hasil[jml] == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	
    return 0;
}

//referensi:
//https://github.com/ajahuang/UVa/blob/master/UVa%2010664%20-%20Luggage.cpp
//https://github.com/morris821028/UVa/blob/master/volume106/10664%20-%20Luggage.cpp
