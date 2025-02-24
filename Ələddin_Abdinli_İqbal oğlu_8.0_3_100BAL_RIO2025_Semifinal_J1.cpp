#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define ll long long
#define ld long double
#define all(v) v.begin(),v.end()
#define vi vector<int>
#define pi M_PI
#define endl "\n";
#define gcd(a,b) __gcd(a,b)
const int MOD=1e9+7;
const int N=1e6+5;
set<int> st;
map<int,int>mp;
priority_queue<int,vector<int>>pq;
deque<int>dq;
stack<int>sk;
void solve(){
    string s,s1,s2;
    int k;
    cin>>s;
    cin>>k;
    int a1=s[0]-'0';
    int a2=s[1]-'0';
    int b1=s[3]-'0';
    int b2=s[4]-'0';
    int h=a1*10+a2;
    int m=b1*10+b2+k;
    h+=m/60;
    m%=60;
    if(m>=10)s2=to_string(m);
    else{
        s2='0'+to_string(m);
    }
    if(h%24==0) s1="00";
    h%=24;
    if(h<10) s1='0'+to_string(h);
    else s1=to_string(h);
    cout<<s1<<':'<<s2<<endl;
}
signed main(){
	int t=1;cin>>t;
	while(t--){
		solve();
	}
}
