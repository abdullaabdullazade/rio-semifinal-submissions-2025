//designed by PlasticineEater354
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<int>o(n);
    	vector<int>q(n);
    	for(int i=0; i<n; i++){
    		cin>>q[i];
		}
		for(int i=0; i<n; i++){
			cin>>o[i];
		}
		sort(o.begin(), o.end());
		sort(q.begin(), q.end());
		vector<ll>dp(n, 0);
		ll say=1;
		for(int w=0; w<n; w++){ //q 
			for(int r=w; r<n; r++){
				if(o[r]<=q[w]){
					dp[r]=(dp[r]+1);
				}
			}
		}
		for(int i=0; i<n; i++){
			say=say*dp[i]%1000000007;
		}
		cout<<say<<endl;
		
	}
    return 0;
}

