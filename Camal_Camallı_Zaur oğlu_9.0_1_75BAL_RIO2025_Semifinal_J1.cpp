#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    vector<pair<string,ll>>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    string s,s1,s2,s3;
    ll a;
    ll b,c,d,e,h;
    for(ll i=0;i<n;i++){
        s=v[i].first;
        s=s.substr(3);
        a=stoll(s);
        if(a+v[i].second<60){
            cout<<v[i].first[0]<<v[i].first[1]<<v[i].first[2]<<a+v[i].second<<endl;
            continue;
        }
        else{
            s1=v[i].first;
            s1=s1.substr(0,2);
            b=stoll(s1);
            c=a+v[i].second;
            d=c/60;
            e=c%60;
            s3=to_string(e);
            if(s3.size()==1){
                s3="0"+s3;
            }
            h=b+d;
            if(b+d>=24){
                h=h%24;
                s2=to_string(h);
                if(s2.size()==1){
                    s2="0"+s2;
                }
                cout<<s2<<":"<<s3<<endl;
                continue;
            }
            else if(b+d<24){
                h=h%24;
                s2=to_string(h);
                if(s2.size()==1){
                s2="0"+s2;
                }
                cout<<s2<<":"<<s3<<endl;
                continue;
            }
        }
    }
}
int main(){
ll tt=1;
//cin>>tt;
while(tt--){
    solve();
}
}
