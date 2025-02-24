#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define int l
#define f first
#define s second
#define l long long
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

bool ispolin(l n){
    l k = 0;
    l temp = n;

    while(n){
        k = k * 10 + n % 10;
        n /= 10;
    }

    if(temp == k){
        return 1;
    }
    return 0;
}

void solve(){
    l a , b;
    cin>>a>>b;

    for(int i = a ; i <= b; i++){
        if(ispolin(i)){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }

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
