#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long
#define f first
#define s second
#define pb push_back
#define endl '\n'
const int MAX= 1e5+9;
const int oo=1e18+99;


void solve(){
    int l,r; cin >> l >> r;
    int a=0;
    for(int i=l;i<=r;i++){
        int c=i;
        a=0;
        while(c!=0){
            a++;
            c/=10;
        }
        c=i;
        vector<int> v(a);
        for(int j=0;j<a;j++){
            v[j]=(c%10);
            c/=10;
        }
        vector<int> vc(a);
        reverse_copy(v.begin(),v.end(),vc.begin());
        bool b=true;
        //cout<<a<<"-a"<<endl;
        for(int j=0;j<a;j++){
            //cout<<vc[j]<<"=="<<v[j]<<endl;
            if(vc[j]!=v[j]){
                cout<<i<<endl;
                b=0;
                break;
            }
        }
        if(!b) continue;
        cout<<"Palindrome!"<<endl;
    }
}
 
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t=1; 
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
