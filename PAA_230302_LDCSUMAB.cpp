#include<stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	
	int i, j, k, m, n;
	for(i=1;i<=t;i++){
		scanf("%d", &k);
		j=1;
		
		while(k-j>0){
			k-=j;
			j++;
		}
		
		m=k-1;
		n=j;
		
		printf("%d %d\n", m, n);
	}
}
