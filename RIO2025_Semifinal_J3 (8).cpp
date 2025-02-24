#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#include <set>
#include <deque>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<vector<bool>> a(n, vector<bool>(m));
    for (ll i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (ll j = 0; j < m; j++) {
            if (s[j] == '1')
                a[i][j] = 1;
            else
                a[i][j] = 0;
        }
    }
    vector<vector<pair<bool, ll>>> str(n, vector<pair<bool, ll>>(m)); 
    for (ll i = 0; i < n; i++) {
        ll f_zero = -1, f_one = -1; 
        ll zero_cnt = 0, one_cnt = 0; 
        for (ll j = 0; j < m; j++) {
            if (a[i][j] == 0) {
                zero_cnt++;
                if (f_zero == -1)
                    f_zero = j;
            }
            else {
                one_cnt++;
                if (f_one == -1)
                    f_one = j;
            }
        }
        if (zero_cnt == m)
            for (ll j = 0; j < m; j++)
                str[i][j] = { 1, 0 };
        else if (one_cnt == m)
            for (ll j = 0; j < m; j++)
                str[i][j] = { 1, 1 };
        if (zero_cnt == 1 && one_cnt > 0)
            str[i][f_zero] = { 1, 1 };
        if (one_cnt == 1 && zero_cnt > 0)
            str[i][f_one] = { 1, 0 }; 
        if (zero_cnt == 1 && m == 1)
            str[i][f_zero] = { 1, 2 };
        if (one_cnt == 1 && m == 1) 
            str[i][f_one] = { 1, 2 }; 
    }
    vector<vector<pair<bool, ll>>> sto(n, vector<pair<bool, ll>>(m));
    for (ll j = 0; j < m; j++) {
        ll f_zero = -1, f_one = -1;
        ll zero_cnt = 0, one_cnt = 0; 
        for (ll i = 0; i < n; i++) {
            if (a[i][j] == 0) {
                zero_cnt++; 
                if (f_zero == -1) 
                    f_zero = i; 
            }
            else {
                one_cnt++; 
                if (f_one == -1)
                    f_one = i;
            }
        }
        if (zero_cnt == n)
            for (ll i = 0; i < n; i++)
                sto[i][j] = { 1, 0 }; 
        else if (one_cnt == n) 
            for (ll i = 0; i < n; i++) 
                sto[i][j] = { 1, 1 };  
        if (zero_cnt == 1 && one_cnt > 0)
            sto[f_zero][j] = { 1, 1 }; 
        if (one_cnt == 1 && zero_cnt > 0)  
            sto[f_one][j] = { 1, 0 }; 
        if (zero_cnt == 1 && n == 1)
            sto[f_zero][j] = { 1, 2 };
        if (one_cnt == 1 && n == 1) 
            sto[f_one][j] = { 1, 2 };
    }
    ll ans = 0; 
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (str[i][j].first == 1 && sto[i][j].first == 1 && (str[i][j].second == 2 || sto[i][j].second == 2 || str[i][j].second == sto[i][j].second))
                ans++;
        }
    }
    cout << ans; 
    return 0;
}