// TEMPLADE BY ASLAN ASLANLI





#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;
using str=string;

#define in insert
#define pb push_back
#define pp pair<ll,pair<ll,ll>>
#define END return 0

bool PalinYox (string s){
    string s1=s;
    reverse(s1.begin(),s1.end());
    if(s1==s){
        return true;
    }
    return false;
}

vector<bool> PrimesEro(ll n){
    vector<bool>v(n+1,1);
    if(n<=1){
        v[0]=0;
        v[1]=0;
        return v;
    }
    else if(n==2){
        v[0]=0;
        v[1]=0;
        return v;
    }
    for(int i=2;i<=sqrt(n);i++){
        for(int j=i*i;j<=n;j+=i){
            v[j]=0;
        }
    }
    return v;
}

bool SadeYox(ll n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool MurekkebYox(ll n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return true;
        }
    }
    return false;
}

bool comp (pair<ll,ll>&p1, pair<ll,ll>&p2){
    return p1.second<p2.second;
}

int main(){
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool yox=true;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>v[i+1]){
                yox=false;
                break;
            }
        }
        bool yox1=true;
        for(int i=0;i<n-1;i++){
            if(v[i]<v[i+1]){
                yox1=false;
                break;
            }
        }
        if(yox || yox1){
            cout<<1<<endl;
        }
        else {
            cout<<2<<endl;
        }
    }
}
