#include <iostream>
using namespace std;
int main(){
long long t,ss,dd,d;
char c;
cin>>t;
for(int i=0;i<t;i++){
		cin>>ss>>c>>dd>>d;
			dd+=d;
	if (dd>=60 && ss==23){
		ss=0;
		if(dd/60==1){
			ss=0;
			dd=dd%60;
		}
		else{
		ss+=dd/60;
		dd=dd%60;
		}
	}
	if (dd>=60){
		ss+=dd/60;
		dd=dd%60;
}
	
		
	if(ss<10 && dd<10){
		cout<<"0"<<ss<<c<<"0"<<dd<<endl;}
	if(ss<10 && dd>9){
		cout<<"0"<<ss<<c<<dd<<endl;}
	if(ss>9 && dd<10){
		cout<<ss<<c<<"0"<<dd<<endl;}
	if(ss>9 && dd>9){
		cout<<ss<<c<<dd<<endl;}
	
	}}
