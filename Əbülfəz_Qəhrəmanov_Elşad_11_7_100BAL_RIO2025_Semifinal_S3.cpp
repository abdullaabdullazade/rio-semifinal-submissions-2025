#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define int l
#define f first
#define s second
#define endl '\n'
#define l long long
#define pb push_back
#define mll map<l,l>
#define vl vector<l>
#define pairs pair<l,l>
#define vll vector<pairs>
#define all(v) v.begin(),v.end()
#define dbg(x) cout<<#x<<" = "<<x<<endl;
#define fast ios::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);

using namespace std;
using namespace __gnu_pbds;
typedef tree<int , null_type , less<int> , rb_tree_tag , tree_order_statistics_node_update> indexed_set;

const l N = 2e5 + 5;
const l INF = 1e18;
const l mod = 1e9 + 7;

void solve(){
    l n;
    cin>>n;
    l a[n];
    l b[n];

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    l sum = 0;

    vector<l>v;

    for(int i = 0; i < n; i++){
        b[i] = abs(a[i] - a[(i + 1) % n]);

        if(a[i] >= a[(i + 1) % n]){
            v.pb(i + 1);
        }

        sum += b[i];
    }

    if(sum % 2 == 1){
        cout<<-1<<endl;return;
    }
    l newsum = 0;

    for(int e : v){
        newsum += b[e - 1];
    }

    if(newsum * 2 != sum){
        cout<<-1<<endl;return;
    }

    if(v.size() == n){
        cout<<n - 1<<endl;

        for(int i = 1 ; i < n; i++){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }

    cout<<v.size()<<endl;

    for(int e : v){
        cout<<e<<" ";
    }
    cout<<endl;

}

signed main(){
    fast;

    l nt = 1;
    cin>>nt;

    for(int i = 1; i <= nt; i++){
        //cout<<"case : "<<i<<endl;
        solve();;
    }

}
