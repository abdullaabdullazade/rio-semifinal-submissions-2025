#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int l, r;
	cin>>l>>r;
	for (int i=l; i<=r; i++){
		if (i<10) cout<<"Palindrome!"<<endl;
		else{
			vector<int>v, c;
			int x=i;
			while(x!=0){
				v.push_back(x%10);
				c.push_back(x%10);
				x/=10;
			}
			reverse(c.begin(), c.end());
			bool ans=true;
			for (int a=0; a<v.size(); a++){
					if(v[a]!=c[a]){
						ans=false;
						break;
				}	
			}
			if (ans==true) cout<<"Palindrome!"<<endl;
			else cout<<i<<endl;
		}
	}
}
