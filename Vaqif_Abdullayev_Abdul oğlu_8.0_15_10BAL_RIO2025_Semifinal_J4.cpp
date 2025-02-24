#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
	ll n;
	cin >> n;
	vector <ll> v(n);
	set <ll> s;
	for (ll i = 0; i < n; i++)
	{
		cin >> v[i];
		s.insert(v[i]);
	}
	if (s.size() == 1)
    {
        cout << "Yes";
        return;
    }
	if (!(n - 3))
	{
		ll x = v[0], y = v[1], z = v[2];
		if ((y <= z && y <= x && z <= x) || (x <= y && y <= z && x <= z) || (x >= z && x <= y && y >= z))
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
		return;
	}
	if (!(n % 6) || !(n % 7) || !(n % 3))
    {
        cout << "No";
        return;
    }
    cout << "Yes";
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
	{
		solve();
		cout << endl;
	} // 3 1 2, 2 3 1, 1 2 3
      // 2 3 1, 1 2 3
      // 3 2 1, 1 3 2, 2 1 3, 3 2 1

}

