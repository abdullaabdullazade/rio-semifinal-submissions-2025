#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define pii pair<int,int>

bool check(ll n){
    if(n/10==0){
        return true;
    }
    string s = to_string(n);
    string a = s;
    reverse(a.begin(),a.end());
    if(a==s){
        return true;
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll l,r;
    cin >> l >> r;
    for(ll i=l;i<=r;i++){
        if(check(i)){
            cout << "Palindrome!" << endl;
        }
        else{
            cout << i << endl;
        }
    }
}
