#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define endl "\n"
const int INF=1e9+7;
const int mod=1e9+7;
void xak3r(){
int n,x;
cin>>n;
vector<pair<int,int>>v(n);
for(int i=0;i<n;i++){
cin>>x;
v[i]={x,i};
}
sort(v.begin(),v.end());
vector<int>a;

for(int i=0;i<v.size();i++){
a.push_back(v[i].second);
}
int cnt=0;
for(int i=0;i<n;){
cnt++;
int evv=a[i];
i++;
while(i<n && abs(a[i]-evv)==1){
evv=a[i];
i++;
}
}
cout<<cnt<<endl;
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
