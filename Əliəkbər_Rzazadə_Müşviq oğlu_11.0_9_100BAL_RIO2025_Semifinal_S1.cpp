#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, i, k, t;
    cin >> t;

    while(t--){
        cin >> n;
        vector<int>v(n);
        long long mn = 0, mx = 0, cnt = 0;

        for(i = 0; i < n;i++){
            cin >> v[i];
        }
        for(i = 0;i < n;i++){
            if(mn == 0 and mx == 0){
                if(i + 1 < n){
                    cnt++;
                    while(v[i] == v[i + 1])
                    i++;
                    if(v[i] > v[i + 1])
                    mn = 1;
                    else
                    mx = 1;
                }
                else{
                    cnt++;
                    break;
                }
            }
            if(mn == 1){
                if(v[i] < v[i + 1])
                mn = 0;
            }
            else if(mx == 1){
                if(v[i] > v[i + 1])
                mx = 0;
            }
        }
        cout << cnt << endl;
    }
}
