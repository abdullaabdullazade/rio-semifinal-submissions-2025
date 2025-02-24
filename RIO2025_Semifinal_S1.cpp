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
    int l, r;
    cin >> l >> r;
    for(int i = l; i <= r; i++){
        string s = to_string(i);
        string r = s;
        reverse(s.begin(), s.end());
        if(s == r){
            cout << "Palindrome!" << endl;
        }
        else{
            cout << i << endl;
        }
    }
    return 0;
}
