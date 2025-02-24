#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
int main(){
    fast;
    ll n,m;
    cin>>n>>m;
    string s;
    for(ll i=n;i<=m;i++){
        s=to_string(i);
        string t=s;
        reverse(s.begin(),s.end());
        if(s==t){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }

}
