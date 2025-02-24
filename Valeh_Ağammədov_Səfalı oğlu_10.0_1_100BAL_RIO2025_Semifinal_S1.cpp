#include<bits/stdc++.h>
//         www       //
using namespace std;
#define rev(i,a,b) for(int i = a;i <= b ;i++)
#define rep(i,a,b) for(int i = a;i >= b ;i--)
#define fori for(int i = 1; i <= n ; i++)
#define all(v) (v.begin(), v.end())
#define ll long long
#define pb push_back
#define ld double ll
#define S second
#define F first
const int mod = 1e9 + 7;
const int inf = INT_MAX;
const int N = 1e5 + 10;
const int sz = 1e5 + 5;
const int mod1 = mod;
const ll INF = 1e18;
const int sz1 = sz;
const int B = 40;
const int P = 31;
//bitset<50> bt;
vector<vector<int>> g;
vector<int> check;
vector<int> dp;
void solve(){
    ll l,r;
    cin>>l>>r;
    for(ll i = l; i <= r; i++){
        string s = to_string(i);
        string s1 = s;
        reverse(s1.begin(),s1.end());
        if(s1 == s){
            cout<<"Palindrome!";
        }
        else{
            cout<<i;
        }
        cout<<endl;
    }

    cout<<endl;
}
int main(){
    int T = 1;
    //cin>>T;
    for(int i = 1; i <= T ; i++){
        solve();
    }

    return 0;
}
