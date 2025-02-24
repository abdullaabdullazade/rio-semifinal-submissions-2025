#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n][k];
    for(int i=0 ; i<n; i++){
        for(int j=0 ; j< k ;j++){
            cin>>a[i][j];
        }
    }
    int mini=100000000;
    int ans;
        for(int i=0 ; i<k; i++){
        for(int j=0 ; j<k; j++){
            ans=a[0][i]-a[1][j];
            ans=abs(ans);
            if(mini>ans){
                mini=ans;
            }
        }
    }

    cout<<mini;
}

