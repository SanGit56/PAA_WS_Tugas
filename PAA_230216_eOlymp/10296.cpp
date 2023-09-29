#include<iostream>
#include <map>
using namespace std;

map<unsigned long long int, unsigned long long int> rak_hasil;

unsigned long long int f(unsigned long long int n){
	if(rak_hasil.find(n) != rak_hasil.end())
		return rak_hasil[n];
	else if(n == 0)
		return 1;
	else{
		unsigned long long int hasil = f(n/2) + f(n/3);
		rak_hasil.insert({n, hasil});
		return hasil;
	}
}

int main(){
	unsigned long long int n;
	cin >> n;
	cout << f(n);
}
