/**
    - author : Nora
    - created : 02.15.2025 10:57:50 am.
    - stage : RFO semifinal
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while (t--){
        ll h,m,d;
        char c;
        cin>>h>>c>>m>>d;
        ll total=h*60+m+d;
        ll resh=total/60;
        ll resm=total%60;
        if (resh == 24){
            cout<<00<<":";
        }
        else cout<<resh<<":";
        if (resm%10 == resm){
            cout<<0<<resm<<endl;
        }
        else cout<<resm<<endl;
    }
}
