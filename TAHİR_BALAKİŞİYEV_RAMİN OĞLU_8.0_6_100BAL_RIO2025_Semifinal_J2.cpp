#include <bits/stdc++.h>
#define ll long long
using namespace std;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll t,n;
    cin>>t;
    while(t--){
     cin>>n;
     vector<ll>v(n),v1(n);
     for(ll i=0; i<n; i++){
      cin>>v[i];
  }
  for(ll i=0; i<n; i++){
      cin>>v1[i];
  }
  sort(v.begin(),v.end());
  sort(v1.begin(),v1.end());
  
  ll cnt=0,hasil=1;
  
  for(ll i=0; i<n; i++){
   ll say;
   while(v[i]>=v1[cnt] && cnt<n){
    cnt++;
   }
   say=cnt-i;
   if(say<=0){
    hasil=0;
    break;
   }
   
   hasil=(hasil*say)%(1000000007);
  }
  cout<<hasil<<endl;
  }
  
 }