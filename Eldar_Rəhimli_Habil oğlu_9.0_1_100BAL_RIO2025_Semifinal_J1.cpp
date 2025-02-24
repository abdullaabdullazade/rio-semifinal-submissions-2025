#include<bits/stdc++.h>
#define ll long long
#define st string
#define dl double
#define pair pair<ll,ll>
#define pb push_back
#define pf push_front
#define INF 1000000001
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll k;
		st s;
		cin>>s>>k;
		ll a=int(s[0])-48;
		a*=10;
		a+=int(s[1])-48;
		ll b=int(s[3])-48;
		b*=10;
		b+=int(s[4])-48;
		ll n,m;
		m=(b+k)%60;
		n=a;
		if((b+k)/60!=0)
		{
			n=n+((b+k)/60);
			n%=24;
		}
		if(n<10)
		{
			cout<<0;
		}
		cout<<n<<":";
		if(m<10)
		{
			cout<<0;
		}
		cout<<m<<endl;
	}
}
