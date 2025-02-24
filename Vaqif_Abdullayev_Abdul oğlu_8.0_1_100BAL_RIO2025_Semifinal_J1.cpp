#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve()
{
	string s;
	cin >> s;
	char c1 = s[0];
	char c2 = s[1];
	char c3 = s[3];
	char c4 = s[4];
	ll hours = (c1 - '0') * 10 + (c2 - '0');
	ll minutes = (c3 - '0') * 10 + (c4 - '0');
	ll n;
	cin >> n;
	n %= 1440;
	ll hours2 = (ll)(n / 60);
	ll minutes2 = n % 60;
	hours2 += hours;
	minutes2 += minutes;
	if (minutes2 >= 60)
	{
		hours2 += minutes2 / 60;
		minutes2 %= 60;
	}
	if (hours2 >= 24)
	{
		hours2 %= 24;
	}
	cout << hours2 / 10 << hours2 % 10 << ":" << minutes2 / 10 << minutes2 % 10;
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
	}
}
