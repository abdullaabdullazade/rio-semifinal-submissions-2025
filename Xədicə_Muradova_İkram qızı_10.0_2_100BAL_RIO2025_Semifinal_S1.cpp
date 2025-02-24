#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll l,r;
    cin>>l>>r;
    for( ll i=l ; i<=r ; i++){
        string s=to_string(i);
        ll n=s.length();
        if(n==1){
            cout<<"Palindrome!"<<endl;
        }
        else {
            string m=s;
            reverse(m.begin(),m.end());
            if(m==s){
                cout<<"Palindrome!"<<endl;
            }
            else {
                cout<<s<<endl;
            }
        }
    }
}
