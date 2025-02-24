#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define run ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
#define all(s) s.begin(),s.end()
////////////////////////////////////////////////////////////

void solve()
{
    int n;
    cin >> n;
    int k = n;
    vector<int>a(n);
    for(int i = 0;i < n;i++)    cin >> a[i];
    for(int i = 0; i < n;i++){
        int ln = 0;
        int temp = 0;
        int sd = 0;
        for(int j = i+1; j < n;j++){
            if(abs(a[j] - a[j-1]) == 1){
                temp++;
                sd++;
            }
            else{
                break;
            }
        }
        i+=sd;
        k-=temp;
    }
    cout << k << endl;
}
signed main()
{
    run;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        solve();
    }
}
//2 1 3 5 4
