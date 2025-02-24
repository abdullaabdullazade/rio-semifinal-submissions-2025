#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin>>t;
	for (int i=0; i<t; i++){
		long long s[1], d[1], g;
		char c;
		cin>>s[0]>>c>>d[0];
		cin>>g;
		int r = d[0]+g; 
		if(r<60){
			if(r<10)
				cout<<s[0]<<":0"<<r<<endl;
			else
				cout<<s[0]<<':'<<r<<endl;
		}
		else{
			int q = (d[0]+g)-60;
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
