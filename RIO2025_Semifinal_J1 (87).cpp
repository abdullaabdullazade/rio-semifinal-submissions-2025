#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define MRBEAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){

    MRBEAST

    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n;
        cin>>n;
        string x = "", y = "";
        x+=s[0];
        x+=s[1];
        y+=s[3];
        y+=s[4];
        ll h = stoi(x);
        ll m = stoi(y);
        ll h1 = n/60;
        ll m1 = n%60;
        m+=m1;
        if(m >= 59){
            h1+=(m/60);
            m = m%60;
        }
        h+=h1;
        while(h >= 24){
            h -= 24;
        }
        if(h < 10){
            cout<<0;
        }
        cout<<h<<':';
        if(m < 10){
            cout<<0;
        }
        cout<<m<<endl;
    }

}
