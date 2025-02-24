#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl << '\n'
#define bs << ' '
#define bss bs <<
#define each(i,a) for(auto &i : a)
#define say(x) cout << x endl;
const int inf = 1e9;
const int inff = 1e17;

void maxx(int &a,int b){
    a = max(a,b);
}
void minn(int &a,int b){
    a = min(a,b);
}

int cel(int a,int b){
    return (a + b - 1) / b;
}
bool ok = 0;
int n;


void solve(){
    cin >> n;
    vector<int> sira(n);
    each(i,sira)cin >> i;
    map<int,int> trans,coord;
    vector<int> temp = sira;
    sort(temp.begin(),temp.end());
    for(int i=0;i<n;++i)trans[temp[i]] = i;
    for(int i=0;i<n;++i){
        sira[i] = trans[sira[i]];
        coord[sira[i]] = i;
    }
    vector<bool> vis(n,0);
    int cnt=0;
    for(int a=0;a<n;++a){
        int ind = coord[a];
        if(vis[ind])continue;
        int l,r;
        l = ind - 1;
        r = ind + 1;
        while(l >= 0 && !vis[l] && abs(sira[l] - sira[l+1]) == 1){
            vis[l] = 1;
            l--;
        }
        while(r < n && !vis[r] && abs(sira[r] - sira[r-1]) == 1){
            vis[r] = 1;
            r++;
        }
        vis[ind] = 1;
        cnt++;

    }
    say(cnt)
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int t=1;
   cin >> t;
   while(t--){
    solve();
   }
   //90 900 990
}
