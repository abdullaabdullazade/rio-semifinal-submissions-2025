#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, i, k, j, mn = LLONG_MAX;
    cin >> n >> k;
    vector<long long>v1(k);
    vector<long long>v2(k);

    for(j = 0;j < k;j++){
        cin >> v1[j];
    }
    for(j = 0;j < k;j++){
        cin >> v2[j];
    }

    for(i = 0;i < k;i++){
        for(j = 0;j < k;j++){
            mn = min(mn, abs(v1[i] - v2[j]));
        }
    }
    cout << mn;
}
