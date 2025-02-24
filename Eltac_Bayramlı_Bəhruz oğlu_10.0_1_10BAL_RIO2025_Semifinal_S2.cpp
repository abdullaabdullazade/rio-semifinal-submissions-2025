#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int a,b=0,c=0;
	cin>>a;
	vector<int>v(a);
	vector<int>v1(a);
	for(int i=0; i<a; i++){
		cin>>v[i];
		v1[i]=v[i];
	}
	sort(v1.begin(), v1.end());
	for(int i=0; i<a; i++){
		if(v[i]==v1[i]){
			b++;
		}
	}
	reverse(v.begin(), v.end());
	for(int i=0; i<a; i++){
		if(v[i]==v1[i]){
			c++;
		}
	}
	if(b==a || c==a){
		cout<<"1"<<endl;
	}
	else{
		cout<<"2"<<endl;
	}
}



signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a=1;
	cin>>a;
	while(a>0){
		solve();
		a--;
	}
}

