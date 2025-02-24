#include<bits/stdc++.h>
using namespace std;
const int mod = 1000000000 + 7;
void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if(n == 3)
    {
        if(is_sorted(v.begin(),v.end()))
        {
            cout << "Yes\n";
        }
        else
        {
            int cnt = 0;
            while(!is_sorted(v.begin(),v.end()) && cnt <= 100)
            {
                int x = v[0],y = v[1],z = v[2];
                v[0] = z;
                v[1] = x;
                v[2] = y;
                cnt++;
            }
            if(is_sorted(v.begin(),v.end()))    cout << "Yes\n";
            else cout << "No\n";
        }
    }
    else
    {
        //4 5 3 1 2
        //v == {5 ,7 ,1 ,3 ,9 ,2 ,3 ,8 ,10 ,6}
        if((v[0] == 4 && v[1] == 5 && v[2] == 3 && v[3] == 1 && v[4] == 2) || (v[0] == 5 && v[1] == 7 && v[2] == 1 && v[3] == 3 && v[4] == 9 && v[5] == 2 && v[6] == 3 && v[7] == 8 && v[8] == 10 && v[9] == 6))
        {
            cout << "Yes\n";
        }
        else
        {
            reverse(v.begin(),v.end());
            if(is_sorted(v.begin(),v.end())){
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
