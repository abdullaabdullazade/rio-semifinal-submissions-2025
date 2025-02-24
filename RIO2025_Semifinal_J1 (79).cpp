#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define F first
#define S second
#define fastio ios_base::sync_with_stdio();cin.tie();
const int N=1e3+5;
/*
0-48
1-49
*/
void solve(){
    int k;
    string s;
    cin>>s;
    cin>>k;
    int deq=(s[3]-48)*10+(s[4]-48);
    int saat=(s[0]-48)*10+(s[1]-48);
    int deq1=0;
    if(deq+k>=60){
        deq1=(deq+k)%60;
        saat=saat+(deq+k)/60;
    }
    else{
        deq1=deq+k;
    }
    if(saat>=24){
        if((saat%24)/10==0 and deq1/10==0){
            cout<<0<<saat%24<<":"<<0<<deq1<<endl;
        }
        if((saat%24)/10==0 and deq1/10!=0){
            cout<<0<<saat%24<<":"<<deq1<<endl;
        }
        if((saat%24)/10!=0 and deq1/10==0){
            cout<<saat%24<<":"<<0<<deq1<<endl;
        }
        if((saat%24)/10!=0 and deq1/10!=0){
            cout<<saat%24<<":"<<deq1<<endl;
        }
    }
    else{
        if((saat%24)/10==0 and deq1/10==0){
            cout<<0<<saat%24<<":"<<0<<deq1<<endl;
        }
        if((saat%24)/10==0 and deq1/10!=0){
            cout<<0<<saat%24<<":"<<deq1<<endl;
        }
        if((saat%24)/10!=0 and deq1/10==0){
            cout<<saat%24<<":"<<0<<deq1<<endl;
        }
    }


}

signed main(){
    fastio;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }

}
