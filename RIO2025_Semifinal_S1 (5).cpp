#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define endl "\n"
const int INF=1e9+7;
const int mod=1e9+7;
/*int power(int a,int b,int c){
if(b==0){
return 1;
}
int res=power((int)a,(int)(b/2),(int)c);
res*=res;
//res%=c;
if(b & 1){
res*=a;
}
//return res%=c;
return res;
}*/
void xak3r(){
int l,r;
cin>>l>>r;
for(int i=l;i<=r;i++){
string s=to_string(i),c;
c=s;
reverse(s.begin(),s.end());
if(s==c){
cout<<"Palindrome!"<<endl;
}
else {
cout<<c<<endl;
}
}
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t=1;
//cin>>t;
while(t--){
xak3r();
}
}
