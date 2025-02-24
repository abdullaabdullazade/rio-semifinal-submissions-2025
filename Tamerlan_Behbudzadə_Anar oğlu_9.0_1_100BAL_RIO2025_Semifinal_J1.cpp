#include <bits/stdc++.h>
using namespace std;
#define int long long
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int sz = 2e5+5;
void solve(){
    string s,s1="";
    int d;
    cin>>s>>d;
    int a=(s[3]-'0')*10;
    a+=s[4]-'0';
    int l =(s[0]-'0')*10+(s[1]-'0');
    int k=d/60;
    d=d%60;
    a+=d;
    if(a>=60)
    k+=a/60;
    a=a%60;
    l+=k;
    l=l%24;
    if(l<10)
    cout<<0;
    cout<<l<<':';
    if(a<10)
    cout<<0;
    cout<<a<<endl;

}
signed main(){
    speed;
    int t=1;
    cin>>t;
    while(t--)
    solve();
}
