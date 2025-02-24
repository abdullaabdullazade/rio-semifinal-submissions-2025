#include <bits/stdc++.h>
using namespace std;

#define ll long long

void code(){
    ll h,m, dif;
    char c;
    cin>>h>>c>>m>>dif;
    m += dif;
    h += (m / 60);
    m = m % 60;
    if (h > 23) h = h % 24;
    cout<<(h < 10 ? "0" : "")<<h<<c<<(m < 10 ? "0" : "")<<m<<endl;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll tcs = 1;
    cin>>tcs;
    while (tcs--){
        code();
    }
}
