#include <bits/stdc++.h>
typedef long long ll;
using namespace std;



bool f(ll n){
	string s=to_string(n);
	string s1=s;
	reverse(s1.begin(),s1.end());
	if(s1==s) {
		return true;
	}
	return false;
}
signed main(){
	ios_base::sync_with_stdio(0);
	cin.tie(nullptr);
    //Mammadli Omar
    
    ll a,b;
    cin>>a>>b;
    for(ll i=a; i<=b; i++){
    	bool check=f(i);
        
        if(check){
        	cout<<" Palindrome!\n";

		}
		else{
			cout<<i<<endl;
		}
	}

    
    
    
    
}
