#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,k,t,l,a,b;
vector<long long>v,d;
char s;
cin>>t;
for(long long i=0;i<t;i++)
{
	cin>>n>>s>>k>>l;
	a=k+l;
	b=n;
	if(a>=60)
	{
		a-=60;
		b++;
	}
	if(b>=24)
	{
		b-=24;
	}
	v.push_back(a);
	d.push_back(b);
}	
for(long long i=0;i<v.size();i++)
{
	if(d[i]<10)
	cout<<"0"<<d[i]<<":";
	else if(d[i]>=10)
	cout<<d[i]<<":";
	if(v[i]<10)
	cout<<"0"<<v[i]<<endl;
	else if(v[i]>=10)
	cout<<v[i]<<endl;	
}
}
