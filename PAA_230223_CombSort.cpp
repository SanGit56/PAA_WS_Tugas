#include <bits/stdc++.h>
using namespace std;

int getNextGap(int gap) {
    gap = (10 * gap)/13;
    if (gap < 1)
        return 1;
    return gap;
}

int* combSort(int a[], int n) {
    int gap = n;
    bool swapped = true;
    while (swapped==true or gap!=1) {
        gap = getNextGap(gap);
        swapped = false;
        for (int i=0; i<n-gap; i++) {
            if (a[i] > a[i+gap]) {
                swap(a[i], a[i+gap]);
                swapped = true;
            }
        }
    }
    return a;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0; i<n; i++) cin >> arr[i];

    int* sortedArr = combSort(arr, n);
    for (int i=0; i<n; i++) {
        cout << sortedArr[i] << ' ';
    }
    return 0;
}
