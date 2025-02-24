#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pair pair<ll,ll>
#define pb push_back
// vector<bool>check();
// vector<vector<ll>>g;
// queue<ll>q;
// priority_queue<pair,vector<pair>,greater<pair>>q;
/*
void dfs(ll s)
{
  check[s]=1;
  for(int i : g[s])
 {
  if(!check[i])
  dfs(i);
 }
}
*/
int main()
{
  //ll yaz
  //ya tarix yazicaz,ya da tarix olucaz :)
  //kecmedin vse da get ol
  ll n,a,b,c;
  char k;
  cin>>n;
  while(n--)
  {
   cin>>c>>k>>a>>b;
   c+=b/60;
   a+=b%60;
   	if(a>=60)
   	{
   	  ll t=a/60;
   	  a-=60*(a/60);
   	  
   	  c+=t;
	}
   if(c<24)
   {
   	
	if(c<10)
	{
	 if(a<10)
	 cout<<0<<c<<':'<<0<<a<<endl;
	else 
	cout<<0<<c<<':'<<a<<endl;
    }
   else if(a<10)cout<<c<<':'<<0<<a<<endl;	
	else cout<<c<<':'<<a<<endl;
	}
	if(c>=24)
	{
	 c-=24;
	 if(c<10)
	 {
	 if(a>=10)	
	 cout<<0<<c<<':'<<a<<endl;
	 if(a<10)
	 cout<<0<<c<<':'<<0<<a<<endl;
     }
	else if(a<10) cout<<c<<':'<<0<<a<<endl;	
	else cout<<c<<':'<<a<<endl;
	}
    
  }
}
