#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long double ld;
int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	str s;
	vector <ll> v;
	ll l,r;
	cin>>l>>r;
	for (int i=l; i<=r; i++) {
		queue <ll> q;
		ll x=i;
		while (x!=0) {
			q.push(x%10);
			x/=10;
		}
		while (!q.empty()) {
			ll y=q.front();
			q.pop();
			x=x*10+y;
		}
		if (x-i==0) {
			cout<<"Palindrome!"<<endl;
		}
		else {
			cout<<i<<endl;
		}
	}
}
