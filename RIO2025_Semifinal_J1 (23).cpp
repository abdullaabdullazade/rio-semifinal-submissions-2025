#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ll n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		ll m,k,a;
		char c;
		cin>>m>>c>>k>>a;
		k+=a;
		if(k>=60)
		{
			ll ferq;
			ferq=k/60;
			k-=60*ferq;
			m+=ferq;
		}
		if(m>=24)
		{
			ll ferq;
			ferq=m/24;
			m=0;
			m+=ferq;
		}
		if(m<10)
			cout<<'0'<<m<<':';
		else
			cout<<m<<':';
		if(k<10)
			cout<<'0'<<k<<endl;
		else
			cout<<k<<endl;
	}
	// Ya Allah!
}