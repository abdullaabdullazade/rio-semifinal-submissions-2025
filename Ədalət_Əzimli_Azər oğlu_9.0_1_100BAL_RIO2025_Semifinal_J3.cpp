// VDV, c неба привет!
// Bismillah :)
// Allahim ozun rahatliq ver, fokuslanmama komek ol
// VDV is sky desant (paratrooper)
// mental shit is real, be careful man, or yall be like me, not even having right concious to focus or think yk
// just take care
// but dont go too easy on yourself too, you have to face some hardships in life
// just make sure the thing stopping you or affecting you rlly badly isnt smt mental or idk (such as overthinking trauma etc too many shit)
// you see i was doing somewhat good a year ago like i got till finals, but the problem was im a pessimistic person and my mental state was not good
// anyways man its too deep cant explain it all, just gl
/// BTW LISTEN TO CEZA-Fark var
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(v) v.begin(),v.end()
#define pb push_back
#define drop(x) cout<<x<<endl;return
void VDV()
{
    int n,m;
    cin >> n >> m;
    vector <int> setir_bir(n,0), setir_sifir(n,0), sutun_bir(m,0), sutun_sifir(m,0);
    char arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            setir_bir[i] += (arr[i][j] == '1');
            setir_sifir[i] += (arr[i][j] == '0');
            sutun_bir[j] += (arr[i][j] == '1');
            sutun_sifir[j] += (arr[i][j] == '0');
        }
    }
    if (n == 1 && m == 1) {
        drop(1);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '0') {
                if (setir_bir[i] == m-1 && sutun_bir[j] == n-1) {
                    ans++;
                }
                if (setir_sifir[i] == m && sutun_sifir[j] == n) {
                    ans++;
                }
            }
            if (arr[i][j] == '1') {
                if (setir_bir[i] == m && sutun_bir[j] == n) {
                    ans++;
                }
                if (setir_sifir[i] == m-1 && sutun_sifir[j] == n-1) {
                    ans++;
                }
            }
        }
    }
    drop(ans);
}
signed main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    int tt = 1;
    // cin >> tt;
    while (tt--) {
        VDV();
    }
}
