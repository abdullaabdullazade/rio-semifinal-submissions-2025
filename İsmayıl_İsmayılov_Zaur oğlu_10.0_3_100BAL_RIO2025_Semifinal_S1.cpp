#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n , k;
    cin >> n >> k;
    for(ll i = n ; i <= k; i++){
        string s  = to_string(i);
        string k = s;
        reverse(k.begin(),k.end());
        if(s == k) cout << "Palindrome!" << endl;
        else cout << i << endl;
    }
}