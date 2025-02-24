#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vll vector<ll>
#define vvll vector<vll>
#define sll set<ll>
#define in insert
#define pb push_back
#define all(x) x.begin(), x.end()
using namespace std;
const int sz = 1e6+5;

ll i, j;

void neoroyal(){
    ll l, r; cin>>l>>r;
    for(i=l; i<=r; i++){
        string s = to_string(i);
        string t = s;
        reverse(all(s));
        if(s == t) cout << "Palindrome!\n";
        else cout << i << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    system("color 0A");

    /// ll tests; cin>>tests; while(tests--) neoroyal();
    ///
    neoroyal();

    system("pause");
}

























