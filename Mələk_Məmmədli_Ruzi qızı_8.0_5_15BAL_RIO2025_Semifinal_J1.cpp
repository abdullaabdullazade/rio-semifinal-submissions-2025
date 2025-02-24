#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main (){
	ll t;
	cin>>t;
	for (int i=0; i<t; i++){
		ll s[1], d[1], g;
		char c;
		cin>>s[0]>>c>>d[0];
		cin>>g;
		while(g>60){
			g-=60;
			s[0]++;
		}
		while(s[0]>24){
			s[0]-=24;
		}
		ll r = d[0]+g;
		if(r<60){
			if(r<10)
				cout<<s[0]<<":0"<<r<<endl;
			else
				cout<<s[0]<<':'<<r<<endl;
		}
		else{
			ll q = (d[0]+g)-60;
			if(s[0]<23){
				if(q<10)
					cout<<s[0]+1<<":0"<<q<<endl;
				else
					cout<<s[0]+1<<":"<<q<<endl;
			}
			else{
				cout<<"00:0"<<q<<endl;
			}
		}
	}
	return 0;
}
