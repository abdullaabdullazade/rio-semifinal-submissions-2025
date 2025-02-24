#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll l, r;
    cin>>l>>r;
    for (ll i = l; i <= r; i++){
        string s = to_string(i);
        int che = 1, m = s.size();
        for (int j = 0; j < s.size(); j++){
                if (j > m - j - 1) break;
            if (s[j] != s[m - j - 1]) che = 0;
        }
        if (che){
            cout<<"Palindrome!";
        }
        else{
            cout<<i;
        }
        cout<<"\n";
    }
}
