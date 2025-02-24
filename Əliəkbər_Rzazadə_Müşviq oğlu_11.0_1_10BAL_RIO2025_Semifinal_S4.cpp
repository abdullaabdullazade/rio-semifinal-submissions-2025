#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,mini=10e9;
    cin>>n>>k;
    long long arr[n][k];
    for(int i=0;i<n;i++){
        for(int a=0;a<k;a++){
            cin>>arr[i][a];
        }
    }
    for(int i=0;i<k;i++){
        for(int a=0;a<k;a++){
            mini=min(mini,abs(arr[0][i]-arr[1][a]));
        }
    }
    cout<<mini<<endl;
}
