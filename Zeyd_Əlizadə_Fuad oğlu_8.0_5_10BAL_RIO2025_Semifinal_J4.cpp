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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n == 3)
        {
            ll x, y, z;
            cin>>x>>y>>z;
            if(x <= y && y <= z)
            {
                cout<<"Yes";
            }
            else if(z <= x && x <= y)
            {
                cout<<"Yes";
            }
            else if(y <= z && z <= x)
            {
                cout<<"Yes";
            }
            else
            {
                cout<<"No";
            }
            cout<<endl;
            continue;
        }
        vector<ll>v(n);
        foriv
        {
            cin>>v[i];
        }
        ll k = 0;
        while(true)
        {
            ll mini = v[k];
            ll idx = k;
            if(k == n - 1)
            {
                cout<<"Yes";
                break;
            }
            for(ll i = k; i<v.s(); i++)
            {
                if(v[i] < mini)
                {
                    idx = i;
                    mini = v[i];
                }
            }
            if(idx == k)
            {
                k++;
                continue;
            }
            if(idx == k + 2 && k == n - 2)
            {
                cout<<"No";
                break;
            }
            ll x = v[idx-2], y = v[idx-1], z = v[idx];
            v[idx-1] = z;
            v[idx-2] = y;
            v[idx] = x;
        }
        cout<<endl;
    }
}
