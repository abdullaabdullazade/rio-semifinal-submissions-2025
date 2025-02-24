#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){	
int a,b,c;
char d;
cin>>a>>d>>b>>c;
int f,g,h;
g=c/60;
f=c%60;
a=a+g;
b+=f;
if(b>59){
	b=b%60;
	a++;
}
a=a%24;
if(a<10)
cout<<0<<a;
else
cout<<a;
cout<<d;
if(b<10)
cout<<0<<b;
else 
cout<<b;
cout<<endl;
}}
