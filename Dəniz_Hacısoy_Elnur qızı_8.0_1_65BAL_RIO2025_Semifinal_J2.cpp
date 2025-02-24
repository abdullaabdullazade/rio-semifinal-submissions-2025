#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
	ll n,t,s,say=1,maks=1000000007,flag;
	cin>>t;
	while (t--)
	{
		cin>>n;
		flag=0;
		say=1;
		ll a[n],b[n];
		for (int i=0; i<n; i++)
			cin>>a[i];
		for (int i=0; i<n; i++)
			cin>>b[i];
		sort(a,a+n);
		sort(b,b+n);
		for (int i=0; i<n; i++)
		{
			if (a[i]<b[i])
			{
				flag=1;
				break;
			}
			s=0;
			for (int j=i; j<n; j++)
			{
				if (a[i]>=b[j])
				{
				s++;
				}
			}
			say=(say*s)%maks;
		}
		if (flag==1)
		cout<<0<<endl;
		else
		cout<<say<<endl;
	}
}


