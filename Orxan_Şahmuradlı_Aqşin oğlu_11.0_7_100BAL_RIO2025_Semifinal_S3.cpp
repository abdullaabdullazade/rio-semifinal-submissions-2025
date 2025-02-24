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
	cin>>t;
	while (t--) {
		cin>>n;
		vector <ll> a(n), b;
		for (int i=0; i<n; i++) {
			cin>>a[i];
		}
		vector <ll> vminus, vpilus;
		ll minusavans=0, pilusavans=0;
		for (int i=0; i<n; i++) {
            ll l=i, r=i+1;
            if (i==n-1) {
                r=0;
            }

			if (a[r]>a[l]) {
				vminus.push_back(l+1);
			}
			else if (a[r]<a[l]){
				vpilus.push_back(l+1);
			}
			else {
                if (minusavans>pilusavans) {
                    pilusavans++;
                    vpilus.push_back(l+1);
                }
                else {
                     minusavans++;
                     vminus.push_back(l+1);
                }
			}
		}

		cout<<vpilus.size()<<endl;
		for (int i=0; i<vpilus.size(); i++) {
			cout<<vpilus[i]<<" ";
		}
		cout<<endl;
	}

}
