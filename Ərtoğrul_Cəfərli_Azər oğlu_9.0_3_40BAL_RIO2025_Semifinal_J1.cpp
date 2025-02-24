#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define sorts sort(s.begin(), s.end())
#define sortv sort(v.begin(), v.end())
#define reverses reverse(s.begin(), s.end())
#define reversev reverse(v.begin(). v.end())
#define ff first
#define ss second
#define pair pair<int,int>
const ll inf=1e9+7;
int main()
{
	fast;
	ll t;
	cin>>t;
	ll b,c,a;
	char k;
	while(t--) {
		cin>>b>>k>>c;
		cin>>a;
		c+=a;
		if(c<60) {
			if(c==0 and b<10)
			cout<<0<<b<<k<<0<<c<<endl;
			else if(c==0)
			cout<<b<<k<<0<<c<<endl;
			else if(b<10)
                cout<<0<<b<<k<<c<<endl;
            else cout<<b<<k<<c<<endl;
		}
		else {
			ll say=c/60;
			c=c%60;
			b+=say;
			while(b>=24) {
				b-=24;
			}
			if(c<10 and b>10)
			cout<<b<<k<<0<<c<<endl;
			else if(b<10 and c>10)
			cout<<0<<b<<k<<c<<endl;
			else if(b<10 and c<10) {
				cout<<0<<b<<k<<0<<c<<endl;
			}
			else cout<<b<<k<<c<<endl;
		}
	}
	return 0;
}

