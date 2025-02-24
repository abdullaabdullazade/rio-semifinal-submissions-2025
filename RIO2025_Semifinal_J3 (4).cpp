#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

const int MAX = 2000;

int n , m;
char a[MAX][MAX];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cin >> a[i][j];
        }
    }
    int ans = 0;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
        int zy = 0 , za = 0 , zs = 0 , zsl = 0;
        int oy = 0 , oa = 0 , os = 0 , osl = 0;
            for(int k = i + 1;k <= n;k++){
                if(a[k][j] == '1'){
                    oa++;
                }
                else{
                    za++;
                }
            }
            for(int k = 1;k <= i - 1;k++){
                if(a[k][j] == '1'){
                    oy++;
                }
                else{
                    zy++;
                }
            }
            for(int k = 1;k <= j - 1;k++){
                if(a[i][k] == '1'){
                    os++;
                }
                else{
                    zs++;
                }
            }
            for(int k = j + 1;k <= m;k++){
                if(a[i][k] == '1'){
                    osl++;
                }
                else{
                    zsl++;
                }
            }
            if((za == 0 && zy == 0 && zsl == 0 && zs == 0) or (oa == 0 && oy == 0 && osl == 0 && os == 0)) ans++;
        }
    }
    cout << ans << endl;
}
