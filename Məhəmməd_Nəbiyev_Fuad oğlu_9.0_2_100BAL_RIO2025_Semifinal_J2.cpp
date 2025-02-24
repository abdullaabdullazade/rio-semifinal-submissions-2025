#include<bits/stdc++.h>;
using namespace std;
#define int long long
#define endl "\n"
const int N  = 1e6+5;
const int mod = 1e9+7;
int a[N],b[N];

//priority_queue
void solve(){
int n,vur = 1;
cin>>n;
for(int i = 0;i<n;i++){
cin>>a[i];
}
for(int i = 0;i<n;i++){
cin>>b[i];
}
sort(a,a+n);
sort(b,b+n);
for(int i = 0;i<n;i++){
auto it = upper_bound(b,b+n,a[i])-b;
vur = vur*(it-i)%mod;
if(it-i<=0){
cout<<0<<endl;
return;
}
}
cout<<max(0LL,vur)<<endl;
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
