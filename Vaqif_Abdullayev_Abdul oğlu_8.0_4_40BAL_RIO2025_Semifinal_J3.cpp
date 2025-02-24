#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n, m;
    cin >> n >> m;
    ll count1 = 0;
    char c[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
        	cin >> c[i][j];
        }
    }
    ll cnt = 0;
    bool check = true;
    for (ll i = 0; i < n; i++)
    {
    	for (ll j = 0; j < m; j++)
    	{
    		set <char> s;
    		if (j < m  - 1)
    		{
    			s.insert(c[i][j + 1]);
    			for (ll k = j + 1; k < m; k++)
    			{
    				s.insert(c[i][k]);
    				if (s.size() > 1)
    				{
    					check = false;
    					break;
					}
				}
			}
			if (j > 0)
			{
				for (ll k = j - 1; k >= 0; k--)
				{
					s.insert(c[i][k]);
					if (s.size() > 1)
					{
						check = false;
						break;
					}
				}
			}
			if (i < n - 1)
			{
				for (ll k = i + 1; k < n; k++)
				{
					s.insert(c[k][j]);
					if (s.size() > 1)
					{
						check = false;
						break;
					}
				}
			}
			if (i > 0)
			{
				for (ll k = i - 1; k >= 0; k--)
				{
					s.insert(c[k][j]);
					if (s.size() > 1)
					{
						check = false;
						break;
					}
				}
			}
			if (check)
			{
				cnt++;
			}
			check = true;
		}
	}
	cout << cnt;
}

