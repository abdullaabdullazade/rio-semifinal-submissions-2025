#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    vector<ll> b(n);
    ll sum=0;
    for(int i=0;i<n;++i){
        if(i==n-1){
            b[i]=abs(a[n-1]-a[0]);
            sum+=b[i];
            continue;
        }
        b[i]=abs(a[i]-a[i+1]);
        sum+=b[i];
    }
    if(sum%2!=0){
        cout<<-1<<endl;
        return;
    }
    ll p=sum/2;
    vector<ll>d;
    for (int i=0;i<(1<<n);++i){
        ll f=0,l=0;
        for(int j=0; j<n; ++j){
            if(!(i&(1<<j))){
                f+=b[j];
                d.push_back(j);
                l++;
            }
        }
        if(f==p){
            if(l==n) continue;
            cout<<l<<endl;
            for(int q=0;q<l;++q){
                cout<<d[q]+1<<" ";
            }
            cout<<endl;
            return;
        }
        d.clear();
        l=0;
    }
    cout<<-1<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--)solve();
}
