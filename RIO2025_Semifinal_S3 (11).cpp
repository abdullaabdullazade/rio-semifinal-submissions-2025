#include <bits/stdc++.h>

using namespace std;

long long power(long long a, long long b) {
    if(b == 0) {
        return 1;
    }

    long long res = power(a, b / 2);
    if(b % 2) {
        return res * res * a;
    }
    else {
        return res * res;
    }
}

int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--) {
        int n, fi;
        bool flag = false;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin>>a[i];
        }
        fi = a[0];
        for(int i = 1; i < n; i++) {
            a[i - 1] = abs(a[i] - a[i - 1]);
        }
        a[n - 1] = abs(a[n - 1] - fi);
        for(int b = 0; b <= power(2, n); b++) {
            long long s1 = 0, s2 = 0;
            vector<int> v;
            for(int i = 0; i < n; i++) {
                if(b & power(2, i)) {
                    s1 += a[i];
                    v.push_back(i + 1);
                }
                else {
                    s2 += a[i];
                }
            }
            if(s1 == s2) {
                if(v.size() != 0) {
                    flag = true;
                    cout<<v.size()<<endl;
                    for(int i = 0; i < v.size(); i++) {
                        cout<<v[i]<<" ";
                    }
                    cout<<endl;
                    break;
                }

            }
        }
        if(flag == false) {
            cout<<-1<<endl;
        }
    }

    return 0;
}
