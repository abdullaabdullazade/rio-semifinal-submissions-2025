#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define endl "\n"
const int INF=1e9+7;
const int mod=1e9+7;
void xak3r(){
map<int,int>mp;
int sum=0;
vector<int>v;
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n-1;i++){
v.push_back(abs(a[i]-a[i+1]));
sum+=abs(a[i]-a[i+1]);
}
sum+=abs(a[0]-a[n-1]);
v.push_back(abs(a[0]-a[n-1]));
if(sum & 1){
cout<<"-1"<<endl;
return;
}
for(int bt=1;bt<=(1<<v.size());bt++){
int sum1=0,sum2=0;
vector<int>vv;
vector<int>cvb1,cvb2;
for(int i=0;i<v.size();i++){
if(bt & 1<<(i)){
sum1+=v[i];
vv.push_back(i+1);
}
else {
sum2+=v[i];
}
}
if(sum1==sum2){
cout<<vv.size()<<endl;
for(int i=0;i<vv.size();i++){
cout<<vv[i]<<" ";
}
cout<<endl;
return;
}
}
cout<<-1<<endl;
}
signed main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t=1;
cin>>t;
while(t--){
xak3r();
}
}
