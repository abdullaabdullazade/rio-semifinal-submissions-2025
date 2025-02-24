/**
    - author : Nora
    - created : 02.15.2025 10:57:50 am.
    - stage : RFO semifinal
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(v) v.begin(), v.end()

const ll MAX=1e10;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while (t--){
        ll h,m,d;
        char c;
        cin>>h>>c>>m>>d;
        if (h == 0){
            h=12;
        }
        if (d >= 1440){
            d%=1440;
        }
        ll total=h*60+m+d;
        h=total/60;
        m=total%60;
        if (h >= 24){
            h-=24;
        }
        if (h%10 == h){
            cout<<0<<h<<":";
        }
        else cout<<h<<":";
        if (m%10 == m){
            cout<<0<<m<<endl;
        }
        else cout<<m<<endl;
    }
}
