#include "bits/stdc++.h"
#define ll long long
#define endl '\n'
#define polyanna ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
bool isp(string s){
    for(ll i=0; i<s.size()/2; i++){
        if(s[i]!=s[s.size()-i-1]) return false;
    }
    return true;
}
int main(){
    polyanna
    ll l, r;
    cin>>l>>r;
    for(int i=l; i<=r; i++){
        string s;
        s=to_string(i);
        if(isp(s)!=0) cout<<"Palindrome!"<<endl;
        else cout<<i<<endl;
    }
}