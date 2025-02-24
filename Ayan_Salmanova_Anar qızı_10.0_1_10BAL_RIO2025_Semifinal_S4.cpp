#include <bits/stdc++.h>
#define en '\n'
#define pb push_back
#define mod 1000000007
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef long long ll;
using namespace std;
const int sz=2e5+5;
ll a[sz], b[sz];
int main()
{
    ios;
    ll n, k;
    cin>>n>>k;
    set<ll>s;
    for(int i=1; i<=k; i++){
        cin>>a[i];
    }
    for(int i=1; i<=k; i++){
        cin>>b[i];
    }
    for(int i=1; i<=k; i++){
        for(int j=1; j<=k; j++){
            s.insert(abs(a[i]-b[j]));
        }
    }
    for(auto x : s){
        cout<<x;
        exit(0);
    }
}
