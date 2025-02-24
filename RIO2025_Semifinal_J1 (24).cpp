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
			k-=60;
			m++;
		}
		if(m>=24)
			m=0;
		if(m==0)
			cout<<"00:";
		else
			cout<<m<<':';
		if(k<10)
			cout<<'0'<<k<<endl;
		else
			cout<<k<<endl;
	}
	
	
	// Ya Allah!
}