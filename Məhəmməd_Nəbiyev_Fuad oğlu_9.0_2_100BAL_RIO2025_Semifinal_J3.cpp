#include<bits/stdc++.h>;
using namespace std;
#define int long long
#define endl "\n"
const int N  = 1505;
const int mod = 1e9+7;
int a[N][N];

//priority_queue
void solve(){
int n,m,say = 0,cem = 0,cem2 = 0;
cin>>n>>m;
for(int i = 0;i<n;i++){
for(int j = 0;j<m;j++){
a[i][j] = 0;
}
}
int p = n;
while(p--){
string s;
cin>>s;
for(int i = 0;i<m;i++){
if(s[i]=='1'){
a[say][i] = 1;
}
}
say++;
}
vector<int>v,v2;
for(int i = 0;i<n;i++){
for(int j = 0;j<m;j++){
cem+=a[i][j];
}
v.push_back(cem);
cem = 0;
}
cem = 0;
for(int j = 0;j<m;j++){
for(int i = 0;i<n;i++){
cem+=a[i][j];
}
v2.push_back(cem);
cem = 0;
}
say = 0;
for(int i = 0;i<v.size();i++){
for(int j = 0;j<v2.size();j++){
int x = v[i]-a[i][j];
int y = v2[j]-a[i][j];
//cout<<x<<" "<<y<<endl;
if((x==0 && y==0) || (x==m-1 && y==n-1)){
say++;
}
}
}
cout<<say<<endl;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t = 1;
//cin>>t;
while(t--){
solve();
}
}
