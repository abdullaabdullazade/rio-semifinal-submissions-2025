#include <bits/stdc++.h> 
#define ll long long 
using namespace std; 
 
signed main() { 
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
     
    ll n; 
    cin>>n; 
    while(n--){ 
     ll sat,deq,gec; 
     char noqte; 
     cin>>sat>>noqte>>deq>>gec; 
     ll deq2=(deq+gec)%60; 
     ll sat2=(sat+((deq+gec)/60)); 
     if(sat2>=24){ 
      sat2=sat2%24; 
  } 
   
  if(sat2<10){ 
   cout<<0<<sat2; 
  } 
  else{ 
   cout<<sat2; 
  } 
  cout<<noqte; 
  if(deq2<10){ 
   cout<<0<<deq2; 
  } 
  else{ 
   cout<<deq2; 
  } 
  cout<<endl; 
 } 
     
}