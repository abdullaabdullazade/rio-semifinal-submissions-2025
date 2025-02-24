#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;
void solve(){
   int n, m, res =0; cin >> n >> m; char s[n][m];
   for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) cin >> s[i][j];
   }
   if(m==1){
        int c=0,d=0;
        for(int i=0;i<n;i++){
            if(s[i][0]=='0') c++;
            else d++;
        }
        if(c==0){
            cout<<n; return;
        }
        if(d==0){cout<<n; return;}
        if(c==1 && d==1){cout<<n; return;}
        if(min(c,d)==1) {cout<<1<<'\n'; return;}
        cout<<0<<'\n'; return;
        }
   for(int i = 0; i < n; i++){
        int c=0,d=0,x=0,y=0;
    for(int j =0; j < m; j++) {
        if(s[i][j]=='0'){c++; x=j;}
        else{ d++;y=j;}
    }
    if(c==1){
        int h=0;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(s[j][x]=='0') h++;
        }
        if(h==0) res++;
    }
    else if(d==1){
        int h=0;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(s[j][y]=='1') h++;
        }
        if(h==0) res++;
    }
    else if(c==0){
        for(int j=0;j<m;j++){
                int h=0;
            for(int f=0;f<n;f++){
                if(s[f][j]=='0') h++;
            }
            if(h==0) res++;
        }
    }
     else if(d==0){
        for(int j=0;j<m;j++){
                int h=0;
            for(int f=0;f<n;f++){
                if(s[f][j]=='1') h++;
            }
            if(h==0) res++;
        }
    }
   } cout << res << '\n';


}

signed main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1; //cin >> t;
    while(t--) solve(); return 0;
}
