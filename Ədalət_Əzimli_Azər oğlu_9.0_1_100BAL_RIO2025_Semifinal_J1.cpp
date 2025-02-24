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
    string s;
    int d;
    cin >> s >> d;
    string s1 = "", s2 = "";
    int saat = (s[0] - '0') * 10 + (s[1] - '0');
    int deqiqe = (s[3] - '0') * 10 + (s[4] - '0');
    int deyisme = d/60;
    int qaliq = d%60;
    deqiqe += qaliq;
    if (deqiqe >= 60) {
        saat++;
        deqiqe -= 60;
    }
    saat += deyisme;
    while (saat >= 24) {
        saat -= 24;
    }
    string f1 = "",f2 = "";
    if (saat < 10) {
        f1 = "0";
    }
    if (deqiqe < 10) {
        f2 = "0";
    }
    cout << f1 << saat << ":" << f2 << deqiqe << endl;
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
