#include<bits/stdc++.h>
using namespace std;

signed main(){
	int t;
	cin>>t;
	while(t--){
	
	int c;
	string s;
	cin>>s>>c;
	int b=char(s[3]-'0')*10+char(s[4]-'0');
	int a=char(s[0]-'0')*10+char(s[1]-'0');

	a=a+((b+c)/60);
	if(a>23)
		a-=24;
	b=(b+c)%60;
	if(a==0)
		cout<<a<<0<<":";
	else if(a<10)
		cout<<0<<a<<":";
	else
		cout<<a<<":";
	if(b==0){
		cout<<0<<b<<endl;
	}
	else if(b<10){
		cout<<0<<b<<endl;
	}
	else
		cout<<b<<endl;
}

	
}
