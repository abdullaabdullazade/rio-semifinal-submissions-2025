#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define vll vector<pll>
#define endl '\n'
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(x) x.begin(), x.end()

#define int ll

void fmain(){
    int l, r;
    cin >> l >> r;
    for(int i = l; i <= r; i++){
        string s = to_string(i);
        string ss = s;
        reverse(all(ss));
        if(s == ss) cout << "Palindrome!" << endl;
        else    cout << i << endl;
    }
}

signed main(){
    fastio;
    int tsts = 1;
    // cin >> tsts;
    while(tsts--){
        fmain();
    }
}