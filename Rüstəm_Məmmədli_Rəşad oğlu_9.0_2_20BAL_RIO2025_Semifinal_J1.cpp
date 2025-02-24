#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    ll a,b = 0,x, y;
    cin >> a;
    if(a == 0)
    {
        cout << s;
        return;
    }
    if(a >= 60)
    {
        b = a / 60;
        a = a - b*60;
    }
    string s1 = s.substr(0, 2);
    string s2 = s.substr(3, 2);
    x = stoi(s1);
    y = stoi(s2);
    x += b;
    y += a;
    if(y > 59)
    {
        x++;
        y = y - 60;
    }
    if(x > 23)
    {
        x = x - 24;
    }
    if(x > 9)
    {
        cout << x << ':';
    }
    else cout << 0 << x << ':';
    if(y > 9) cout << y << endl;
    else cout << 0 << y << endl;

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {solve();}
}
