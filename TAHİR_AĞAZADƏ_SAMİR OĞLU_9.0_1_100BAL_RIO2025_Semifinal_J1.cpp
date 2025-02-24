#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define double long double
#define pb push_back
#define tahir ios_base::sync_with_stdio(0); cin.tie(0)
void solve(){
    string s; cin>>s; int n; cin>>n;
    int curr = 0;
    string t = s.substr(0,2); int hour  = stoll(t);
    string x = s.substr(3,4); int minute = stoll(x);
    minute+= n;
    if(minute>=60){
        hour+= minute/60;
        minute%= 60;
    }
    if(hour>=24)hour%= 24;
    if(hour<10){
        if(minute<10) cout<<0<<hour<<':'<<0<<minute<<endl;
        else cout<<0<<hour<<':'<<minute<<endl;
    }
    else{
        if(minute<10) cout<<hour<<':'<<0<<minute<<endl;
        else cout<<hour<<':'<<minute<<endl;
    }

}
signed main(){
    tahir;
    int T=1;
    cin>>T;
    while(T--){
        solve();
    }
}
