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
    int n;
    cin >> n;
    vector <int> arr(n);
    bool sub2 = 1;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i > 0) {
            if (arr[i-1] <= arr[i]) {
                sub2 = 0;
            }
        }
    }
    if (n == 3) {
        if (arr[0] < arr[1] && arr[1] > arr[2] && arr[0] < arr[2]) {
            drop("No");
        }
        if (arr[0] > arr[1] && arr[1] > arr[2]) {
            drop("No");
        }
        if (arr[0] > arr[1] && arr[1] < arr[2] && arr[2] > arr[0]) {
            drop("No");
        }
        drop("Yes");
    }
    if (sub2) {
        drop("Yes");
    }
}
signed main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        VDV();
    }
}
