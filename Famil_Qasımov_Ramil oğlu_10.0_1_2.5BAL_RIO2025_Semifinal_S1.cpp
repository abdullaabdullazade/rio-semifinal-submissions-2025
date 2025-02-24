#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9+7;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int l,r;
    cin >> l >> r;
    for(int i = l;i<=r;i++){
        if(i<10){
            cout << "Palindrom!" << endl;
        }
        else if(i<100 && i%11==0){
            cout << "Palindrom!" << endl;
        }
        else if(i<1000 && i%37==0){
            cout << "Palindrom!" << endl;
        }
        else cout << i << endl;
    }
}
