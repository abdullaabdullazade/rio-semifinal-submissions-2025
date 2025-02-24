#include<bits/stdc++.h>
using namespace std;
const int maxx=2e9;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int a[k+2],b[k+2];
    for(int i=1;i<=k;i++){
        cin>>a[i];
    }
    for(int j=1;j<=k;j++){
        cin>>b[j];
    }
    int sum=maxx;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            sum=min(sum,abs(a[i]-b[j]));
            //cout<<sum<<" ";
        }
    }
    cout<<sum<<'\n';
}
