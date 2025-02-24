#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int n,k;
	cin>>n>>k;
	int a[k],b[k];
	for(int i=0;i<k;i++){
		cin>>a[i];
	}
	for(int i=0;i<k;i++){
		cin>>b[i];
	}
	int mn=1e9+10;
	for(int i=0;i<k;i++){
		for(int j=0;j<k;j++){
			int k=abs(a[i]-b[j]);
			mn=min(mn,k );
		}
	}
	cout<<mn;
}

