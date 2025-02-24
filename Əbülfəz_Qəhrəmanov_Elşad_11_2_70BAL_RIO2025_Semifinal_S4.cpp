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
     l n ,k;
     cin>>n>>k;

     vector<vector<l>>a(n ,vector<l>(k , 0));
     vector<l>ptr(n , 0);


     for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < k ;j++){
            cin>>a[i][j];
        }
        sort(all(a[i]));
     }

     l mini = INF;

     multiset<pairs>s;

     for(int i = 0; i < n; i++){
        s.insert({a[i][0] , i});
     }

     while(true){
        pairs bg = *s.begin();
        pairs en = *s.rbegin();
        s.erase(s.begin());

        mini = min(mini , en.f - bg.f);



        ptr[bg.s]++;
        if(ptr[bg.s] == k){
            break;
        }
        s.insert({a[bg.s][ptr[bg.s]] , bg.s});
     }

     cout<<mini<<endl;





}

signed main(){
    //fast;

    l nt = 1;
    //cin>>nt;

    for(int i = 1; i <= nt; i++){
        //cout<<"case : "<<i<<endl;
        solve();;
    }

}
