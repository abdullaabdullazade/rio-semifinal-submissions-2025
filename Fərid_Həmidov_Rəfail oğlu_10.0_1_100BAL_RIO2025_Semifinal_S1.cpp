#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repi(i,a,b) for(int i=a;i<=b;i++)
#define vll vector<ll>vec
#define pb emplace_back
#define endl '\n'
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

string toString(ll s){
    string ans="";
    while(s!=0){
        ans+=char((s%10)+48);
        s/=10;
    }
    return ans;
}

bool is_pal(ll s){
    string num=toString(s);
    string revnum=num;
    reverse(revnum.begin(),revnum.end());
    if(revnum==num) return true;
    return false;
}
void solve(){
    //cout<<1+48  
    ll l,r;
    cin>>l>>r;
    while(l<=r){
        if(is_pal(l)){
            cout<<"Palindrome!"<<endl;
        }
        else cout<<l<<endl;
        l++;
    }
   /*string ts=toString(123);
   cout<<ts<<endl*/
    return;
}
int main(){
    IO;
    int t;
    //cin>>t;
    t=1;
    while(t--){
        solve();
    }
    return 0;
}
