#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n, k, mini = 1000000005;
    cin>>n>>k;
    vector<long long> v(k);
    vector<long long> v2(k);
    for(int i = 0; i < k; i++) {
        cin>>v[i];
    }
    for(int i = 0; i < k; i++) {
        cin>>v2[i];
    }
    for(int i = 0; i < k; i++) {
        for(int j = 0; j < k; j++) {
            mini = min(abs(v[i] - v2[j]), mini);
        }
    }
    cout<<mini<<endl;
    return 0;
}
