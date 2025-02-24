#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		string st;
		int add;
		cin >> st >> add;
		int ss = (st[0] - 48) * 10 + (st[1] - 48);
		int mm = (st[3] - 48) * 10 + (st[4] - 48);
		mm += add;
		int s = mm / 60;
		ss += s;
		mm -= s * 60;
		ss = ss % 24;
		if(ss <= 9) {
			cout << 0;
		}
		cout << ss << ':';
		if(mm <= 9) {
			cout << 0;
		}
		cout << mm << endl;
	}
	return 0;
}
