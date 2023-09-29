#include<stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int i[n], x, warna;
	warna=n;
	
	for(x=0;x<n;x++){
		scanf("%d", &i[x]);
		
		if(i[x]>warna) warna=i[x];
	}
	
	printf("%d", warna);
}
