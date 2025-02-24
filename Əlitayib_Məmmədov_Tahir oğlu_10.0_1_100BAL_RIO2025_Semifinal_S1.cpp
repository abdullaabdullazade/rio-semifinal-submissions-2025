#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
#define dune ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(i,a,b) for(int i=a; i<b; i++)
#define int long long
#define double long double
#define vc vector<int>
#define vpc vector<pair<int,int>>
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
bool comp(pair<int,int> a, pair<int,int> b) {
    return a.ss<b.ss;
}
signed main() {
    dune;
    int l,r;
    cin >> l >> r;
    for(int i = l; i <= r; i++) {
        string s=to_string(i);
        string s1=s;
        reverse(all(s1));
        if(s1==s)
            cout << "Palindrome!" << endl;
        else
            cout << i << endl;
    }
}
