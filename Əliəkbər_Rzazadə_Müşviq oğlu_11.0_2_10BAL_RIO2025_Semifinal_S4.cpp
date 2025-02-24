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
    for(int b=0;b<n;b++){
        for(int i=0;i<k;i++){
            for(int e=0;e<n;e++){
                if(e==b){
                    continue;
                }
                for(int a=0;a<k;a++){
                    mini=min(mini,abs(arr[b][i]-arr[e][a]));
                }
            }
        }
    }
    cout<<mini<<endl;
}
