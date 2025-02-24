#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define f first
#define s second
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll l, r;
    cin>>l>>r;
    for (ll i=l; i<=r; i++){
        string s=to_string(i);
        string scopy=s;
        reverse(scopy.begin(), scopy.end());
        if (s==scopy){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}