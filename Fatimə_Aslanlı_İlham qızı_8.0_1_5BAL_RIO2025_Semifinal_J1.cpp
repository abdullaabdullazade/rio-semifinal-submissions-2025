#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,k,t,l,a,b;
vector<long long>v,d;
char s;
cin>>t;
for(int i=0;i<t;i++)
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
for(int i=0;i<v.size();i++)
{
	if(v[i]<=9 && d[i]<=9)
	cout<<"0"<<d[i]<<":"<<"0"<<v[i]<<endl;
	else if(v[i]<=9)
	cout<<d[i]<<":"<<"0"<<v[i]<<endl;
	else if(d[i]<=9)
	cout<<"0"<<d[i]<<":"<<v[i]<<endl;
}
}