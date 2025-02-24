#include <bits/stdc++.h>
using namespace std;
#define ff ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ll long long
int MAXN=1e6;
bool issort(vector<ll>v){
    for(int i=0;i<v.size()-1;i++){
        if(v[i]<v[i+1])return false;
    }
    return true;
}
ll fpow(ll a, ll b){
    if(b==0)return 1;
    else{
        if(b%2==0){
            ll p=fpow(a, b/2);
            return 1LL*p*p;
        }else{
            ll p=fpow(a, (b-1)/2);
            return 1LL*p*p*a;
        }
    }
}
vector<bool>v(1e6,false);
vector<ll>primes;
bool isp(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}
void sieve(){
    v[0]=v[1]=true;
    for(ll i=2;i*i<=MAXN;i++){
        if(!v[i]){
            for(ll j=i*i;j<=MAXN;j+=i){
                v[j]=true;
            }
        }
    }
    for(ll i=2;i<=MAXN;i++){
        if(!v[i]){
            primes.push_back(i);
        }
    }
}
bool palindrome(string s){
    return s==string(s.rbegin(), s.rend());
}
ll lis(vector<ll>v){
    vector<ll>res;
    for(ll x:v){
        if(x>res.front()||res.empty()){
            res.push_back(x);
        }else{
            auto it=lower_bound(v.begin(),v.end(),x);
            *it = x;
        }
    }
    cout<<1<<res.size()<<res.back();
    return res.size();
}
void solve(){
    ll n,m, d;
    char c;
    cin>>n>>c>>m>>d;
    ll full = n*60+m+d;
    ll h=full%3600/60%24;
    //h=600
    ll mi=full%3600%60;
    if(h<10 && mi<10){
        cout<<0<<h<<":"<<0<<mi<<endl;
    }else if(h<10 && mi>9){
        cout<<0<<h<<":"<<mi<<endl;
    }else if(h>9 &&mi<10){
        cout<<h<<":"<<0<<mi<<endl;
    }else{
        cout<<h<<":"<<mi<<endl;
    }
    return;
}
int main(){
    ff;
    //sieve();
    ll t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
