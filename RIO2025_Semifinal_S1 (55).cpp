#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool pal(int n){
    string s=to_string(n);
    ll j=s.size()-1;
    for(ll i=0;i<j;i++){
        if(s[i]!=s[j])
        {
            return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio();
    cin.tie();
    cout.tie();
    ll l,r;
    cin>>l>>r;
    for(ll i=l;i<=r;i++){
        if(pal(i)==true){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}
