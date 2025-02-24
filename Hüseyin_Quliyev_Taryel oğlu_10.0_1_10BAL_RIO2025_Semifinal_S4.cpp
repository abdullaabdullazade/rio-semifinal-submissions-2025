#include<bits/stdc++.h>
#define int long long
#define vi vector<int>
#define vii vector<pair<int,int>>
#define pb push_back
#define S second
#define F first
#define fastio ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define all(x) x.begin(),x.end()
using namespace std;
const int N=10009;
bool isprime(int n){
if(n<=2){return true;}
if(n%2==0 && n>2){return false;}
for(int i=3;i*i<=n;i++){
    if(n%i==0){
        return false;
    }
}
return true;
}
void guliyev(){
int n;
cin>>n;
vi v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
if(is_sorted(all(v))){
  cout<<"1"<<endl;
  return;
   }
   reverse(all(v));
if(is_sorted(all(v))){
  cout<<"1"<<endl;
  return;
   }

        cout<<2<<endl;
    }

signed main(){
int t=1;
fastio
cin>>t;
while(t--){
    guliyev();
}
}
//Husu but in love with S version
