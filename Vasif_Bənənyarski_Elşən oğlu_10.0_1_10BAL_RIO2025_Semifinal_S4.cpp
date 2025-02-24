#include <bits/stdc++.h>
using namespace std;
int main  (){
    int n,m;
    cin>>n>>m;
    int a[m],b[m],dp[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i=0;i<m;i++){
            dp[i]=abs(a[i]-b[0]);
        for(int j=1;j<m;j++){
            dp[i]=min(abs(a[i]-b[j]),dp[i]);
        }
    }
    int k=dp[0];
    for(int i=1;i<m;i++){
        k=min(dp[i],k);
    }
    cout<<k;
}
