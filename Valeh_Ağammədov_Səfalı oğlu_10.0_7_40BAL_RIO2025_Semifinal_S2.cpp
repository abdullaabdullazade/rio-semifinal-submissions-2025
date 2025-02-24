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
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n ;i++){
        cin>>a[i];
    }
    int ans = 0;
    bool b1 = 0,b2 = 0;
    for(int i = 1;i < n ;i++){
        if(a[i] == (a[i - 1] + 1) && i < n){
            ans++;
            while(a[i] == (a[i - 1] + 1) && i < n){
                i++;
            }
        }
        if(a[i] == (a[i - 1] - 1) && i < n){
            ans++;
            while(a[i] == (a[i - 1] - 1) && i < n){
                i++;
            }
        }
        if(a[i] != (a[i + 1] + 1) && a[i] != (a[i + 1] - 1) && (a[i] != (a[i - 1] + 1) && a[i] != (a[i - 1] - 1)) && i < n){
            ans ++;
        }
        //if(i == 0 && a[i] != (a[i + 1] + 1) && a[i] != (a[i + 1] - 1)){
        //    ans++;
        //}
    }
    if(a[0] != (a[1] + 1) && a[0] != (a[1] - 1)){
        ans ++;
    }
    if(is_sorted(a,a + n)){
        cout<<1<<endl;
        return;
    }
    reverse(a,a + n);
    if(is_sorted(a,a + n)){
        cout<<1<<endl;
        return;
    }
    cout<<ans;
/*
8
3
1 2 3
3
3 2 1
4
4 2 3 1
5
4 5 3 2 1
4
2 3 4 1
1
1
3
1 3 2
3
3 1 2
*/
    cout<<endl;
}
int main(){
    int T = 1;
    cin>>T;
    for(int i = 1; i <= T ; i++){
        solve();
    }

    return 0;
}
