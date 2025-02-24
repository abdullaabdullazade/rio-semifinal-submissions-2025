// TEMPLADE BY ASLAN ASLANLI





#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;
using str=string;

#define in insert
#define pb push_back
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
    ull l,r;
    string s1,s2;
    cin>>l>>r;
    for(ull i=l;i<=r;i++){
        s1=to_string(i);
        if(PalinYox(s1)){
            cout<<"Palindrome!\n";
            continue;
        }
        cout<<s1<<endl;
    }
}
