#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
void solve(){
   int n; cin >> n;
   vector<int> a(n); cin >> a[0] >> a[1] >> a[2];
   if(is_sorted(a.begin(),a.end())){ cout<<"Yes\n"; return;}
   int x=a[0], y=a[1], z=a[2];
    a[0]=z; a[1]=x; a[2]=y;
    if(is_sorted(a.begin(),a.end())){ cout << "Yes\n"; return;}
    x=a[0]; y=a[1]; z=a[2];  a[0]=z; a[1]=x; a[2]=y;
    if(is_sorted(a.begin(),a.end())){ cout << "Yes\n"; return;}
    x=a[0]; y=a[1]; z=a[2];  a[0]=z; a[1]=x; a[2]=y;
    if(is_sorted(a.begin(),a.end())){ cout << "Yes\n"; return;}
    if(is_sorted(a.begin(),a.end())){ cout << "Yes\n"; return;}
    x=a[0]; y=a[1]; z=a[2];  a[0]=z; a[1]=x; a[2]=y;
    if(is_sorted(a.begin(),a.end())){ cout << "Yes\n"; return;}
    x=a[0]; y=a[1]; z=a[2];  a[0]=z; a[1]=x; a[2]=y;
    if(is_sorted(a.begin(),a.end())){ cout << "Yes\n"; return;}
    cout << "No\n";
}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; cin >> t;
    while(t--) solve(); return 0;
}
