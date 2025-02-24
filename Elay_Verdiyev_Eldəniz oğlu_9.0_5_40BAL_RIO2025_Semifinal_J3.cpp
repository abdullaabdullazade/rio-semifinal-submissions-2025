#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long

const int MAX = 2000;

int n , m;
char a[MAX][MAX];

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> a[i][j];
        }
    }
    vector < vector < int > > on(n + 1 , vector < int > (m + 1 , 0));
    vector < vector < int > > ze(n + 1 , vector < int > (m + 1 , 0));
    //on[i][j] = i.setrin j sine qeder 1
    for(int i = 0;i < n;i++){
        if(a[i][0] == '1') on[i][0] = 1;
        if(a[i][0] == '0') ze[i][0] = 1;
        for(int j = 1;j < m;j++){
            on[i][j] = on[i][j - 1];
            ze[i][j] = ze[i][j - 1];
            if(a[i][j] == '1') on[i][j]++;
            else ze[i][j]++;
        }
    }
    vector < vector < int > > oo(m , vector < int > (n , 0));
    vector < vector < int > > zz(m , vector < int > (n , 0));
    //oo[i][j] = i.sutunun j sine qeder
    for(int i = 0;i < m;i++){
        if(a[0][i] == '1') oo[i][0] = 1;
        else zz[i][0] = 1;
        for(int j = 1;j < n;j++){
            oo[i][j] = oo[i][j - 1];
            zz[i][j] = zz[i][j - 1];
            if(a[j][i] == '1') oo[i][j]++;
            else zz[i][j]++;
        }
    }
    int ans = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            int zy = 0 ,za = 0 , zs = 0 , zsl = 0;
            int oy = 0 ,oa = 0 , os = 0 , osl = 0;
            if(i != 0){
                zy = zz[j][i - 1];
                oy = oo[j][i - 1];
            }
            if(i != n - 1){
                za = zz[j][n - 1] - zz[j][i];
                oa = oo[j][n - 1] - oo[j][i];
            }
            if(j != 0){
                zs = ze[i][j - 1];
                os = on[i][j - 1];
            }
            if(j != m - 1){
                zsl = ze[i][m - 1] - ze[i][j];
                osl = on[i][m - 1] - on[i][j];
            }
            if((zy == 0 && zs == 0 && zsl == 0 && za == 0) or (oy == 0 && os == 0 && osl == 0 && oa == 0)) ans++;
        }
    }
    cout << ans << endl;
}
