#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long pangkat(long long a_juga, long long b_juga){
	long long hasil=1;
	
	while(b_juga>0){
		if(b_juga&1){
			hasil*=a_juga;
			hasil%=1000000;
		}
		
		b_juga=b_juga>>1;
		a_juga*=a_juga;
		a_juga%=1000000;
	}
	
	return hasil;
}

int main(){
	long long a, b;
	cin >> a >> b;
	long long c=pangkat(a, b);
	
	bool lebih6x9=false;
	long long d=a;
	while(b--){
		d*=a;
		if(d>999999){
			lebih6x9=true;
			break;
		}
	}
	
	if(lebih6x9)
		printf("%06lld", c);
	else
		cout << c;
}
