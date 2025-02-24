#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    ll l,r; cin >> l >> r;
    for(ll i=l; i<=r; i++){
        string s;
        s = to_string(i);
        ll n=s.length();
        bool flag=true;
        for(ll j=0; j<=(n+1)/2; j++){
            if(s[j] != s[n-j-1]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout << "Palindrome!" << "\n";
        }
        else cout << s << "\n";
    }
}
