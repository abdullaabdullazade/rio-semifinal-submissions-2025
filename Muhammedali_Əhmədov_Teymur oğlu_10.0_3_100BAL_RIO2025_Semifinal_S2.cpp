// Bismillahirrahmanirrahim
// ))
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define all(x) x.begin(),x.end()
#define pb push_back
#define ins insert
#define pii pair<int,int>
#define putr(x) cout<<x<<endl;return;

const int inf = LLONG_MAX,sze = 2e5+23, mod= 1e9+7, prime = 1453;

void fast(){
    int l,r;
    cin>>l>>r;
    string t,s;
    for(int i = l;i<=r;i++){
        t=to_string(i);
        s=t;
        reverse(all(s));
        if(t==s){
            cout<<"Palindrome!"<<endl;
        }else{
            cout<<i<<endl;
        }
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int tt = 1;
    //cin>>tt;
    while(tt--){
        fast();
    }

    return 0;
}
