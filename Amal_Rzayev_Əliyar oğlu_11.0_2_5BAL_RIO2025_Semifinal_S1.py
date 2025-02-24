#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <iomanip>
#include <set>
#include <queue>
#define ll long long
#define ff first
#define ss second
#define mpr make_pair
#define pb push_back
#define in insert
#define svt sort(vt.begin(), vt.end())
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> vt1(k), vt2(k);
    for(ll i = 0; i < k; i++)
    {
        cin >> vt1[i];
    }
    for(ll i = 0; i < k; i++)
    {
        cin >> vt2[i];
    }
    sort(vt1.begin(), vt1.end());
    sort(vt2.begin(), vt2.end());
    ll minimum = LLONG_MAX;
    for(ll i = 0; i < k; i++)
    {
        for(ll j = 0; j < k; j++)
        {
            minimum = min(minimum, abs(vt1[i] - vt2[j]));
        }
    }
    cout << minimum;
}
