#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;
#define ll long long
#define pairll pair<ll, ll>
#define mk make_pair 
#define hurry_up ios_base::sync_with_stdio(0); \
    cout.tie(0); \
    cin.tie(0); \


int main(){
    string l, r, current;
    cin>>l>>r;
    ll f=r.size()-1;
    while(1){
		if (r[f]=='9'){
			if (f==0){
				r[f]='0';
				r='1'+r;
				break;
			}
			r[f]='0';
			f--;
			continue;
		}
		else{
			r[f]++;
			break;
		}
	}
    current=l;
    while(current!=r){
    	bool jacob=1;
    	ll s=current.size();
    	ll d=s/2;
    	for(ll i=0;i<d;i++){
    		if (current[i]!=current[s-i-1]){
    			jacob=0;
    			break;
			}
		}
		if (jacob){
			cout<<"Palindrome!"<<endl;
		}
		else{
			cout<<current<<endl;
		}
		s--;
		while(1){
			if (current[s]=='9'){
				if (s==0){
					current[s]='0';
					current='1'+current;
					break;
				}
				current[s]='0';
				s--;
				continue;
			}
			else{
				current[s]++;
				break;
			}
		}
	}
}
