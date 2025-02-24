#include <bits/stdc++.h>
using namespace std;

int main(){
	int l,r;
	cin>>l>>r;
	string s,f;
	while(l<=r){
		s=to_string(l);
		f=to_string(l);
		reverse(s.begin(),s.end());
		if(f==s){
			cout<<"Palindrome!"<<endl;
		}
		else{
			cout<<l<<endl;
		}
		l++;
	}
}
