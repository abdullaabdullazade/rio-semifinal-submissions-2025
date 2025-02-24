#include<bits/stdc++.h>
using namespace std;

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n), v2(n);
        for(int i = 0;i < n;++i){
            cin >> v[i];
            v2[i] = v[i];
        }
        sort(v2.begin(), v2.end());
        for(int i = 0;i < n;++i){
            v[i] = lower_bound(v2.begin(), v2.end(), v[i]) - v2.begin();
        }
        int res = 0;
        if(n == 1)res = 1;
        for(int i = 0;i + 1 < n;++i){
            int j = i + 1, ferq = v[i + 1] - v[i];
            res++;
            if(abs(ferq) != 1){
                if(i == n - 2)res++;
                continue;
            }
            while(j + 1 < n && v[j + 1] - v[j] == ferq){
                j++;
            }
            i = j;
            if(i == n - 2)res++;
        }
        cout << res << '\n';
    }
}
