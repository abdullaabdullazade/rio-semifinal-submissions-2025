#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pll pair<long long, long long>
#define vll vector<long long>
#define in insert
const ll MOD = 1e9+7;
bool check(ll n){
    string s=to_string(n);
    for(ll i=0;i<s.size()/2+s.size()%2;i++){
        if(s[i]!=s[s.size()-i-1]) return false;
    }
    return true;
}
int main(){
    ll l,r;
    cin>>l>>r;
    for(ll i=l;i<=r;i++){
        if(i<10) cout<<"Palindrome!"<<endl;
        else{
            if(check(i)) cout<<"Palindrome!"<<endl;
            else cout<<(ll)i<<endl;
        }
    }
}
