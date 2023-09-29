#include <cstdio>
#include <iostream>
using namespace std;

#define JML_UANG 21

int koin[22];
int isian;
unsigned long long int total[10000];

unsigned long long int hitung_cara(){
	int i, j;
	total[0] = 1;
	
    for(i = 1; i<=isian; i++)
		total[i] = 0;	//inisialisasi isi array
    
    //solusi dynamic programming
    for(i = 1; i<=JML_UANG; i++){
    	for(j = koin[i]; j<=isian; j++){
			total[j] = total[j] + total[j - koin[i]];	//menjumlahkan cara tiap2 koin
        }
	}

    return total[isian];
}

void hitung_uang(){
	int i;
	
    for(i = 1; i <= JML_UANG; i++)
		koin[i] = i*i*i;	//menghitung kelipatan 3 tiap angka
}

int main(){

    hitung_uang();
    
	while(1){
		scanf("%d", &isian);
		printf("%llu\n", hitung_cara());
	}

    return 0;
}

//referensi: https://github.com/shahidul2k9/problem-solution/blob/master/uva%20online%20judge/11137%20-%20Ingenuous%20Cubrency.cpp
