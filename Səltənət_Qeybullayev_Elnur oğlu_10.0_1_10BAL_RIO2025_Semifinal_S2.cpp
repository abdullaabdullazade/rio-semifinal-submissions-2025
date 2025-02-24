#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n],b[n],cnt=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		    b[i]=a[i];	
		}
		sort(a,a+n);
		for(int i=0;i<n;){
			int f=0;
			for(int j=0;j<n;j++){
				if(b[i]==a[j]){
					f=j;
					break;
				}
			}
			while(b[i]==a[f]){
				if(b[i+1]==a[f-1]){
					i++;
					f--;
				}
				else{
				i++;
				f++;
			}
			}
			cnt++;
		}
		cout<<cnt<<endl;
	}
}
