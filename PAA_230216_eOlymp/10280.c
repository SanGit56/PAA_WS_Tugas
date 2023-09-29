#include<stdio.h>
#include<math.h>

int main() {
	int kota;
	scanf("%d", &kota);
	
	int jarak[kota];
	scanf("%d", &jarak[0]);
	
	int iterasi, besar, kecil;
	besar=jarak[0];
	kecil=jarak[0];
	
	for(iterasi=1;iterasi<kota;iterasi++){
		scanf("%d", &jarak[iterasi]);
		
		if(jarak[iterasi]>besar) besar=jarak[iterasi];
		if(jarak[iterasi]<kecil) kecil=jarak[iterasi];
	}
	
	int distens;
	distens = abs(besar-kecil)*2;
	printf("%d", distens);
}
