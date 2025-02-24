#include <bits/stdc++.h>
#define int long long

const int sz = 1e6 + 5;
const int mod = 1e9 + 7;
int a[sz], b[sz];

using namespace std;

void solve(){
        int n, ans = 0; cin >> n;

        for(int i = 1; i <= n; i++){
            cin >> a[i]; b[i] = a[i];
        }
        sort(b+1,b+n+1);
        map<int, int>mp;
        for(int i = 1; i <= n; i++){
                if(mp[a[i]] == 1)continue;
            for(int j = 1; j <= n; j++){
                if(a[i] == b[j]){
                    int i2 = i, j2 = j;
                    while(a[i] == b[j]){
                        mp[a[i]] = 1;
                        i++; j++;
                        if(i > n or j > n)break;
                    }
                    i = i2, j = j2;
                    while(a[i] == b[j]){
                        mp[a[i]] = 1;
                        i++; j--;
                        if(i > n or j < 1)break;
                    }
                    i = i2;
                    ans++;
                    break;
                }
        }
    }
    cout << ans << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(); cout.tie();

    int tc = 1;
    cin >> tc;
    while(tc--)solve();
}
