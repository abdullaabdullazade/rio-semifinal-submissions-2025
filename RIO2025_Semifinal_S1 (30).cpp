#include "bits/stdc++.h"
#define ll long long
#define endl '\n'
#define polyanna ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main(){
    polyanna
    ll l, r;
    cin>>l>>r;
    for(ll i=l; i<=r; i++){
        string s, t;
        s=to_string(i);
        t=s;
        reverse(s.begin(), s.end());
        if(s==t) cout<<"Palindrome!"<<endl;
        else cout<<i<<endl;
    }
}