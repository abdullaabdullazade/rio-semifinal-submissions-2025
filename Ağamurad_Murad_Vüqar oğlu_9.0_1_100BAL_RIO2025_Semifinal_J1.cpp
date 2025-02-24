#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
    	string s;
    	ll x;
    	cin>>s>>x;
    	ll time,h,m;
    	h=(int(s[0])-48)*10+int(s[1])-48;
    	m=(int(s[3])-48)*10+int(s[4])-48;
    	time=h*60+m;
    	time+=x;
    	if(time>=1440) time%=1440;
    	if(time/60<10) cout<<"0";
    	cout<<time/60<<":";
    	if(time%60<10) cout<<"0";
		cout<<time%60<<endl;
	}
}
