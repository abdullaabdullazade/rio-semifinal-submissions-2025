#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int sz = 2e5+5;
int mod=1e9+7;
int f(int n){
    int k=1;
    for(int i=2;i<=n;i++)
        k*=i;
    return k;
}
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n),ans(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    b=a;
    ans=b;
    sort(b.begin(),b.end());
    if(ans==b)
    {

        cout<<"Yes"<<endl;
        return;
    }
    for(int i=0;i<3;i++)
    {
        ans[0]=a[2];
        ans[1]=a[0];
        ans[2]=a[1];
        a=ans;
        if(ans==b)
        {
            cout<<"Yes"<<endl;
            return;
        }
    }
    cout<<"No"<<endl;
}
signed main(){
    speed;
    int t=1;
    cin>>t;
    while(t--)
    solve();
}
