#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define endl '\n'

#define s() size()
#define b() begin()
#define e() end()
#define rb() rbegin()
#define re() rend()
#define c() clear()

#define pb push_back
#define ins insert
#define popb pop_back
#define popf pop_front
#define ts to_string
#define si stoi

#define forin for(ll i=0; i<n; i++)
#define forjn for(ll j=0; j<n; j++)
#define forim for(ll i=0; i<m; i++)
#define forjm for(ll j=0; j<m; j++)
#define foris for(ll i=0; i<s.s(); i++)
#define foriv for(ll i=0; i<v.s(); i++)

#define sorts sort(s.b(), s.e())
#define sortv sort(v.b(), v.e())
#define reverses reverse(s.b(), s.e())
#define reversev reverse(v.b(), v.e())

#define hurryup cin.tie(0);cout.tie(0)

bool isPrime(ll n)
{
    if(n == 1 || sqrt(n) * sqrt(n) == n)
    {
        return false;
    }
    for(ll i=2; i<sqrt(n); i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    hurryup;
    ll n, m;
    cin>>n>>m;
    char w[n][m];
    forin
    {
        forjm
        {
            cin>>w[i][j];
        }
    }
    ll k = 0;
    bool b0 = true, b1 = true;
    forin
    {
        forjm
        {
            b0 = true, b1 = true;
            for(int i2=0; i2<n; i2++)
            {
                if(w[i2][j] == '0' && i2 != i)
                {
                    b0 = false;
                }
                if(w[i2][j] == '1' && i2 != i)
                {
                    b1 = false;
                }
                if(b0 == false && b1 == false)
                {
                    break;
                }
            }
            for(int j2=0; j2<m; j2++)
            {
                if(w[i][j2] == '0' && j2 != j)
                {
                    b0 = false;
                }
                if(w[i][j2] == '1' && j2 != j)
                {
                    b1 = false;
                }
                if(b0 == false && b1 == false)
                {
                    break;
                }
            }
            if(b0 || b1)
            {
                k++;
            }
        }
    }
    cout<<k;
}
