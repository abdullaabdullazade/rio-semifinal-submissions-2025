#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define ll long long
#define int ll
#define pb push_back
#define pii pair<int, int>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(v) v.begin(), v.end()
#define Endl endl

const int N=100009;
const int mod=1e9+7;

//mt19937 rnd(time(NULL));
//uniform_int_distribution<> gen(1, 2);

bool ispol(int n){
    int cn=n, n2=0;
    while(cn>0){
        n2=n2*10+(cn%10);
        cn=cn/10;
    }
    if(n2==n){
        return true;
    }
    return false;
}

void solve(){
    int l, r;
    cin>>l>>r;
    for(int i=l; i<=r; i++){
        if(ispol(i)){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}

signed main(){
    io;
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}
