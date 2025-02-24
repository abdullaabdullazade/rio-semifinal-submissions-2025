#include<bits/stdc++.h>
#include<string>
#define ll long long
#define mp make_pair
#define ff first
#define ss second
#define pr pair
#define pb push_back
#define INF 1e9
#define MAX 1e5
using namespace std;
int main(){
	ll n,i,j,k,m,l,r;
	string s,sr;
	cin>>l>>r;
	for(i=l ; i<=r ; i++){
		k=i;
		s=to_string(k);
		sr=s;
		reverse(sr.begin(),sr.end());
		if(sr==s){
			cout<<"Palindrome!"<<endl;
		}
		else{
			cout<<s<<endl;
		}
	}
}
