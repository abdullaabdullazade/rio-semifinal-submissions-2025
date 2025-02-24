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
		vector <ll> v;
		ll x=i;
		while (x!=0) {
			v.push_back(x%10);
			x/=10;
		}
		for (int j=0; j<v.size(); j++) {
			
			x=x*10+v[j];
		}
		if (x==i) {
			cout<<"Palindrome!"<<endl;
		}
		else {
			cout<<i<<endl;
		}
	}
}
