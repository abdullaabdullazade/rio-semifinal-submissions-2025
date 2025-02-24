#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,b,d,y,b1,d1,y1;
	cin>>n;
	char v=':';
		cin>>b>>v>>d;
		cin>>y;
		cin>>b1>>v>>d1;
		cin>>y1;
		
	
	if(b==23 && d+y>=60 && (d+y)-60<10)
		cout<<"00"<<":"<<"0"<<(d+y)-60<<endl;
		else if(b==23 && d+y>=60 && (d+y)-60>=10 )
		cout<<"00"<<":"<<(d+y)-60<<endl;
		else if(d+y>=60 && (d+y)-60<10)
		cout<<b+1<<":"<<"0"<<d+((d+y)-60)<<endl;
		else if(d+y>=60 && d+((d+y)-60>9))
		cout<<b+1<<":"<<d+((d+y)-60)<<endl;
		else
		cout<<b<<":"<<d+y;
	
	
		if(b1==23 && d1+y1>=60 && (d1+y1)-60<10)
		cout<<"00"<<":"<<"0"<<(d1+y1)-60<<endl;
		else if(b1==23 && d1+y1>=60 && (d1+y1)-60>=10 )
		cout<<"00"<<":"<<(d1+y1)-60<<endl;
		else if(d1+y1>=60 && (d1+y1)-60<10)
		cout<<b1+1<<":"<<"0"<<d1+((d1+y1)-60)<<endl;
		else if(d1+y1>=60 && d1+((d1+y1)-60>9))
		cout<<b1+1<<":"<<d1+((d1+y1)-60)<<endl;
		else
		cout<<b1<<":"<<d1+y1;}
	
		
	
