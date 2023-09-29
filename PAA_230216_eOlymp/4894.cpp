#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, i, m, x;
	cin >> n;
	for(i=0;i<n;i++){
	    cin >> m;
	    x =  __builtin_popcountll(m-1) % 3;
	    cout << x << "\n";
	}
}
