#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
const int mod = 1e9 + 7;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        vector < int > a(n);
        for(int i = 0;i < n;i++){
            cin >> a[i];
        }
        if(n == 3){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
}
