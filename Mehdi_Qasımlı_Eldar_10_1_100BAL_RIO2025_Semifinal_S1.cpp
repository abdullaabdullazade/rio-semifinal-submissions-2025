#include <bits/stdc++.h>
#define ll long long 
using namespace std;
bool palindrome(long long n){
        string s = to_string(n);
        for(ll i = 0 ; i < s.size() / 2 ; i ++){
            if(s[i] != s[s.size() - i - 1]){
                return false;
            }
        }
        return true;
}
int main() {
    ll l , r;
        cin >> l >> r;
        for(ll i = l ; i <= r ; i ++){
            if(palindrome(i)){
                cout << "Palindrome!" << endl;
            }
            else{
                cout << i << endl;
            }
        }
    }
    

