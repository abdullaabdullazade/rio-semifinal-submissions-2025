#include <bits/stdc++.h>
using namespace std;
int arr[1005][1005];
int main() {
    int n, k;
    cin>>n>>k;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<k; j++) {
            cin>>arr[i][j];
        }
    }
    long long int minimum = abs(arr[0][0] - arr[1][0]);
    for (int i = 0; i<n-1; i++) {
        for (int j = 0; j<k; j++) {
                for (int c = i+1; c<n; c++) {
                    for (int d = 0; d<k; d++) {
                            if (abs(arr[i][j]-arr[c][d])<minimum) {
                                minimum = abs(arr[i][j]-arr[c][d]);
                            }
                    }
                }
        }
    }
    cout<<minimum;
}

