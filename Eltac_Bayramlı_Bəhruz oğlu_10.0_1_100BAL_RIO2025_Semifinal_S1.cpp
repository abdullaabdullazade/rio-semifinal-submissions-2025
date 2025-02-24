#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a,b,c,d,e=0,f;
	cin>>a>>b;
	while(b>=a){
		if(a<10){
			cout<<"Palindrome!"<<endl;
		}
		else{
			f=a;
			vector<int>v;
			vector<int>z;
			while(f>0){
				c=f%10;
				v.push_back(c);
				z.push_back(c);
				f=f/10;
			}
			d=v.size();
			reverse(z.begin(), z.end());
			for(int i=0; i<v.size(); i++){
				if(v[i]==z[i]){
					e++;
				}
		    }   
			if(e==d){
				cout<<"Palindrome!"<<endl;
			}
			else{
				cout<<a<<endl;
			}
		}
		e=0;
		d=0;
		a++;
	}
}


