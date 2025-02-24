#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll t,a,b,c,d,e,f,g;
    string kx,kc,kz,ans1,ans2;
    cin>>t;
    while(t--){
        cin>>kx>>a;
        kc = kx.substr(0,2);
        kz = kx.substr(3,2);
        b = stoll(kc)*60 + stoll(kz);
        b = b+a;
        b = b%1440;
        d = b/60;
        e = b%60;
        ans1 = to_string(d);
        ans2 = to_string(e);
        if(ans1.size() == 1){
            cout<<"0"<<ans1<<":";
        }
        else{
            cout<<ans1<<":";
        }
        if(ans2.size() == 1){
            cout<<"0"<<ans2;
        }
        else{
            cout<<ans2;
        }
        cout<<endl;
    }
}
//By Rashid_Hashimzade
//Good_Luck

