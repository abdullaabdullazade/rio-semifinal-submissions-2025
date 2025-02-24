#pragma ("GCC")
#include<bits/stdc++.h>
#define int long long
#define sz size()
#define S second
#define F first
#define pb push_back
using namespace std;
void solve(){
    int l,r;
    cin >> l >> r;
    while(l<=r){
        bool k=1;
        string x=to_string(l);
        int l1=0,r1=x.sz-1;
        while(l1<r1){
            if(x[l1]!=x[r1]){
                k=0;
            }
            l1++;
            r1--;
        }
        if(k){cout <<"Palindrome!"<< endl;}
        else {
            cout << l << endl;
        }
        l++;
    } 
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int t=1;
    //cin >> t;
    while(t--){
        solve();
    }
}
