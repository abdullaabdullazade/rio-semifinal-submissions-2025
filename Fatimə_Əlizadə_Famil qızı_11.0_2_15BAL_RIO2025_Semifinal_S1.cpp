#include<bits/stdc++.h>
#define int long long
#define all(v) v.begin(), v.end()
#define pv  push_back
using namespace std;
const int mod=1e9+7;
const int sz=1e5+19;
int n,m;
/*
int a,b;
int gcd(int a,int b){
    if(a==1) return b;
    return (a,b%a);
}
*/
/*
int bp(int a, int b){
    int r=1;
    while(b>0){
        if(b%2) r=r*a%mod;
        a=a*a%mod;
        b/=2;
    }
    return r;
}
void solve(){
    f[1]=1;
for(int i=2;i<=n;i++){
    f[i]=f[i-1]*i;
    f[i]=f[i]%mod;
    cout<<f[i]<<" ";
}
cout<<endl;
for(int i=1;i<=n;i++){
    inv[i]=bp(f[i],mod-2);
    cout<<inv[i]<<" ";
}
}
*/
/*
void prime(int n){
    vector<bool>v(n+1,0);
    vector<int>is_prime(n+1,0);
    v[0]=v[1]=false;
    for(int i=2;i<=n;i++){
        if(is_prime[i] and i*i<=n){
            for(int j=i;j*j<=n;j+=i){
                v[j]=false;
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<v[i];
    }
}
*/
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2;
    cin>>s1>>s2;
    n=stoi(s1);
    m=stoi(s2);
    //cout<<n<<m;
    //bool ok[m-n+2];
    for(int i=n;i<=m;i++){
        string s=to_string(i);
        bool ok=true;
        for(int j=0;j<s.size()/2;j++){
            if(s[j]!=s[s.size()-1-j]) ok=false;
        }
        if(ok) cout<<"Palindrome!"<<'\n';
        else cout<<i<<'\n';
    }
}
