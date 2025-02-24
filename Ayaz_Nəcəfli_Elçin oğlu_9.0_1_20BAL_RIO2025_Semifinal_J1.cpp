#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int hh,mm,d;
    char c;
    cin >> hh >> c >> mm >> d;
    mm += d;
    if(mm >= 60)
    {
        mm-=60;
        if(hh + 1 < 24)
        {
            hh++;
            if(hh <= 9)
            {
                if(mm <= 9)
                    cout << 0 << hh << c << '0' << mm << endl;
                else
                {
                    cout << 0 << hh << c << mm << endl;
                }
            }
            else
            {
                if(mm <= 9)
                    cout << hh << c << '0' << mm << endl;
                else
                {
                    cout << hh << c << mm << endl;
                }
            }
        }
        else
        {
            hh-=23;
            if(hh <= 9)
            {
                if(mm <= 9)
                    cout << 0 << hh << c << '0' << mm << endl;
                else
                {
                    cout << 0 << hh << c << mm << endl;
                }
            }
            else
            {
                if(mm <= 9)
                    cout << hh << c << '0' << mm << endl;
                else
                {
                    cout << hh << c << mm << endl;
                }
            }
        }
    }
    else
    {
            if(hh <= 9)
            {
                if(mm <= 9)
                    cout << 0 << hh << c << '0' << mm << endl;
                else
                {
                    cout << 0 << hh << c << mm << endl;
                }
            }
            else
            {
                if(mm <= 9)
                    cout << hh << c << '0' << mm << endl;
                else
                {
                    cout << hh << c << mm << endl;
                }
            }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}
