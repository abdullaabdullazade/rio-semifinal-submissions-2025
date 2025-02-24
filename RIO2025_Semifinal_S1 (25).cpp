#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cstring>
#include <array>
#include <string>
#include <stack>


using namespace std;
 
#define ll long long
#define vi vector<int>
#define int ll
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
 
const int oo = 1e9 + 9;
const int MOD = 1e9 + 7;
const int MAX = 1e6 + 100;
const int LOG = 20;
const int TREE = 1e5 * 300;


void solve(){
    int l, r; cin >> l >> r;
    for(int i = l; i <= r; ++i){
        string s = to_string(i);
        string tmp = s;
        reverse(tmp.begin(),tmp.end());
        if(tmp == s) cout << "Palindrome!\n";
        else cout << s << '\n';
    }
}


signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}