#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string str;
typedef long double ld;
int main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t,n;
	str s;
	vector <ll> v;
	ll l,r;
	cin>>l>>r;
	map <ll,ll> mp;
	for (int i=0; i<=17; i++) {
		for (int j=1; j<=9; j++) {
			n=0;
			for (int k=0; k<=i; k++) {
				ll x=j*pow(10,k);
				n+=x;
			}
			if (n>=l and n<=r) {
				mp[n]=1;
			}
		}
	}
	for (int i=l; i<=r; i++) {
		if (mp[i]) {
			cout<<"Palindrome!"<<endl;
		}
		else {
			cout<<i<<endl;
		}
	}
}
