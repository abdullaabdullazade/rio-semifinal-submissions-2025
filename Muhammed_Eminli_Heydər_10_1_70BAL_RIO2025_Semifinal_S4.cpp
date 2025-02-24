#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin>>a>>b;
    vector<vector<int>> c(a, vector<int>(b));
    
    for (int d = 0; d < a; d++) {
        for (int e = 0; e < b; e++) cin>>c[d][e];
    }

    for (int d = 0; d < a; d++) sort(c[d].begin(), c[d].end());

    vector<int> f(a, 0);
    int g = INT_MAX;

    while (true) {
        int h = INT_MAX, i = INT_MIN;
        int j = -1;

        for (int d = 0; d < a; d++) {
            int k = c[d][f[d]];
            if (k < h) {
                h = k;
                j = d;
            }
            if (k > i) {
                i = k;
            }
        }

        g = min(g, i - h);

        if (f[j] == b - 1) {
            break;
        }

        f[j]++;
    }

    cout<<g<<endl;
    return 0;
}
