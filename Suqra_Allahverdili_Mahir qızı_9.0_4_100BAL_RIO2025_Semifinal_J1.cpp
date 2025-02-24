#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t; cin>>t;
    while(t--)
    {
    	string s; cin>>s;
    	int n; cin>>n;
    	int a=(s[0]-48)*10+(s[1]-48);
    	int b=(s[3]-48)*10+(s[4]-48);
    	int h=n/60;
    	int m=n%60;
    	if(b+m>=60)
    	{
    		h++;
    		m=abs(60-b-m);
    		b=0;
		}
		if(h>=24) h%=24;
    	if(a+h>=24)
    	{
    		h=abs(24-a-h);
    		a=0;
		}
    	
    	a+=h;
    	b+=m;
    	
    	if(a<10 && b<10) cout<<0<<a<<':'<<0<<b<<endl;
		else if(a<10 && b>=10) cout<<0<<a<<':'<<b<<endl;
		else if(a>=10 && b<10) cout<<a<<':'<<0<<b<<endl;
		else cout<<a<<':'<<b<<endl;
	}
}