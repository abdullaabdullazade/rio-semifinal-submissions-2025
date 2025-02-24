#include <bits/stdc++.h>
#define ll long long
#define all(x) x.begin(),x.end()
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
	
	ll a,b,c;
	char m;
	cin>>a>>m>>b>>c; 
	a=(a+(b+c)/60)%24;
		b=(b+c)%60;
	swap(a,b);
	if(b/10==0 && a/10==0){
		cout<<0<<b<<':'<<0<<a<<'\n';
	}
	else if(b/10==0){
		cout<<0<<b<<':'<<a<<'\n';
	}
	else if(a/10==0){
			cout<<b<<':'<<0<<a<<'\n';
	}
	else 	cout<<0<<b<<':'<<0<<a<<'\n';
}
}
