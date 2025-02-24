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
    ll n,k;
    cin>>n>>k;
    vector<vector<ll>>v(n,vector<ll>(k));
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++){
        sort(v[i].begin(),v[i].end());
    }
    vector<vector<ll>>v1(n,vector<ll>(k,LLONG_MAX));
    for(int i=0;i<k;i++){
        v1[0][i]=0;
    }
    vector<ll>ededler;
    for(int i=1;i<n;i++){
        for(int j=0;j<k;j++){
            for(int h=0;h<k;h++){
                v1[i][j]=min(v1[i][j],v1[i-1][h]+abs(v[i][j]-v[i-1][h]));
            }
        }
    }
    cout<<*min_element(v1[n-1].begin(),v1[n-1].end());
    END;
}
