#include<iostream>
using namespace std;

int main(){
	int w, n;
	scanf("%d %d", &w, &n);
	
	int i, c[n];
	for(i=0;i<n;i++){
		scanf("%d", &c[i]);
	}
	
	int maks, j, x;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			maks=0;
			x=c[i]+c[j];
			
			if(x>maks){
				maks=x;
			}
		}
	}
	
	printf("%d\n", maks);
	
	return 0;
}
