/// ALLAH
#include <bits/stdc++.h>
#define ll long long int
#define int ll
#define pii pair<int, int>
#define pb push_back
#define F first
#define S second
#define io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

const int N = 1000005;
const int INF = 1e18;
const int mod = 1e9+7;

signed main()
{
    io;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            bool ok1 = 0, ok2 = 0;
            if(i == 0){
                if(v[i]+1 == v[i+1]){
                    continue;
                }
            }
            else if(i == n-1){

                if(v[i]+1 == v[i-1]){
                    continue;
                }
            }
            else{
                if(v[i]+1 == v[i+1] || v[i]+1 == v[i-1]){
                    continue;
                }
            }
            //cout << v[i] << "      ";
            ans++;
        }
        //cout << endl;
        cout << ans << endl;
    }
    return 0;
}
