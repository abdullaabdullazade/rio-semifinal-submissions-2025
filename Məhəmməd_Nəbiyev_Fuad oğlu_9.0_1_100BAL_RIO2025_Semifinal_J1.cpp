#include<bits/stdc++.h>;
using namespace std;
#define int long long
#define endl "\n"
const int N  = 1e6+5;
const int mod = 1e9+7;
int a[N],b[N];

//priority_queue
void solve(){
string s;
cin>>s;
int n;
cin>>n;
int x = s[0]-'0';
int y = s[1]-'0';
int saat = x*10+y;
int p = s[3]-'0';
int p2 = s[4]-'0';
int deq = p*10+p2;
int cem = saat*60+deq+n;
int o = 24*60;
cem%=o;
int l = cem/60;
int l2 = cem%60;
if(l<=9){
cout<<"0"<<l<<":"<<"";
}
else{
cout<<l<<":"<<"";
}
if(l2<=9){
cout<<"0"<<l2<<endl;
}
else{
cout<<l2<<endl;
}
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
solve();
}
}
