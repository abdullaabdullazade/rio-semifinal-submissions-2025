#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--) {
        string s;cin>>s;int d;cin>>d;
        int a=(s[0]-48)*10+s[1]-48,b=(s[3]-48)*10+s[4]-48;
        int a0=a,b0=b;
        b+=d;
        if(b>=60) {
            a+=b/60;
            b%=60;
        }
        if(a>=24) a%=24;
        if(a==a%10&&b!=b%10) cout<<"0"<<a<<":"<<b;
        else if(a==a%10&&b==b%10) cout<<"0"<<a<<":0"<<b;
        else if(a!=a%10&&b==b%10) cout<<a<<":0"<<b;
        else cout<<a<<":"<<b;
        cout<<endl;
	}
    return 0;
}
