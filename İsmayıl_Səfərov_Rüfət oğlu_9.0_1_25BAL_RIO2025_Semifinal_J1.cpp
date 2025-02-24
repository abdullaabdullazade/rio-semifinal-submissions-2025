#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve(){

}
signed main(){
ll t;
cin>>t;
while(t--){
	ll a; char s; ll b; ll c;
	cin>>a>>s>>b>>c;
	if(c>=60){
		a += c/60;
		b += c%60;
		if(b>=60){
			b-=60;
		}
		if(a>=24){
			a-=24*(a/24);
		}
		if(a<10){
			if(b<10){
				cout<<0<<a<<s<<0<<b<<endl;
			}
			else{
				cout<<0<<a<<s<<b<<endl;
			}
		}
		else{
			if(b<10){
				cout<<a<<s<<0<<b<<endl;
			}
			else{
				cout<<a<<s<<b<<endl;
			}
		}
	}
	else{
		b+=c;
		if(b>=60){
			a+=(b/60);
			b-=60*(b/60);
			if(a >= 24){
				a-=24*(a/24);
			}
			if(a<10){
				if(b<10) cout<<0<<a<<s<<0<<b<<endl;
				else cout<<0<<a<<s<<b<<endl;
			}
			else{
				if(b<10) cout<<a<<s<<0<<b<<endl;
				else cout<<a<<s<<b<<endl;
			}
		}
		else{
			if(a<10){
				if(b<10) cout<<0<<a<<s<<0<<b<<endl;
				else cout<<0<<a<<s<<b<<endl;
			}
			else{
				if(b<10) cout<<a<<s<<0<<b<<endl;
				else cout<<a<<s<<b<<endl;
			}
		}
	}
}
}
