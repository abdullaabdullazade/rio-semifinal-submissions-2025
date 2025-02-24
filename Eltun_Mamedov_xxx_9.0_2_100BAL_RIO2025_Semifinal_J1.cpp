//#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cmath>

using namespace std;
using ll = long long;

int main()
{
	ll t;
	cin >> t;
	for (ll i = 0; i < t; i++) {
		string p;
		ll d;
		cin >> p >> d; 
		ll ss = (p[0] - '0') * 10 + p[1] - '0';
		ll dd = (p[3] - '0') * 10 + p[4] - '0';
		ll dd1 = (dd + d) % 60;
		ll f = (dd + d) / 60; 
		ll ss1 = (ss + f) % 24; 
		cout << ss1 / 10 << ss1 % 10 << ':' << dd1 / 10 << dd1 % 10 << endl;
	}
	//while (true);
	return 0;
}
