#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ios_base::sync_with_stdio();
    cin.tie();
    cout.tie();
    ll l,r;
    cin>>l>>r;
    for(ll i=l;i<=r;i++){
        string s=to_string(i);
        ll j=s.size()-1;
        bool ans=true;
        for(ll i=0;i<j;i++){
            if(s[i]!=s[j])
            {
                ans=false;
            }
        }
        if(ans==true){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}
