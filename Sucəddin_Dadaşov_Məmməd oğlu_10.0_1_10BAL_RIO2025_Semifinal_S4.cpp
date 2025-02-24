#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int t=INT_MAX;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            int x=abs(a[0][j]-a[1][i]);
            t=min(t,x);
        }
    }
    cout<<t;
}
