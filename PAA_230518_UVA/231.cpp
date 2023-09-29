#include<iostream>
#include<vector>
using namespace std;

int long_dec_seq(vector<int> &tgg_misil){
	vector<int> idx_trkhr(tgg_misil.size(), -1);	//vektor idx_trkhr untuk menyimpan indeks terakhir dari urutan angka menurun
	vector<int> pjg(tgg_misil.size(), 1);	//vektor pjg untuk menyimpan panjang dari urutan angka menurun
	int i, j;
	
	//solusi dynamic programming
	for(i=0;i<tgg_misil.size();i++){
		for(j=0;j<i;j++){
			if(tgg_misil[j] >= tgg_misil[i]){	//mengecek apakah suatu indeks lebih besar atau sama dengan
				if(pjg[j]+1 > pjg[i]){	//mengecek apakah bisa menambah panjang urutan angka
					pjg[i] = pjg[j]+1;	//memperbarui data panjang urutan angka
					idx_trkhr[i] = j;	//menyimpan indeks terakhir dari urutan angka menurun
				}
			}
		}
	}
	
	int maks=0;
	
	for(i=0;i<tgg_misil.size();i++){
		if(pjg[i]>maks){
			maks=pjg[i];
		}
	}
	
	return maks;
}

int main(){
	int misil_dtg=0, tes=0;
	
	while(1){
		scanf("%d", &misil_dtg);
		
		if(misil_dtg==-1)
			break;
		
		vector<int> tgg_misil;	//dideklarasikan ulang untuk tiap test case
		
		do{
			tgg_misil.push_back(misil_dtg);
			scanf("%d", &misil_dtg);
		}while(misil_dtg != -1);
		
		int jawaban = long_dec_seq(tgg_misil);
		tes++;
		
		printf("Test #%d:\n", tes);
		printf(" maximum possible interceptions: %d\n", jawaban);
	}
	
	return 0;
}

//referensi: https://github.com/joshcurtis/UVA/blob/master/00231.cpp
