#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,m;
    cin>>n>>m;
    int a[m],b[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    ll minn = 1e9+7;
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                minn=min(minn,(ll)abs(a[i]-b[j]));
            }
        }
    cout<<minn;
}
