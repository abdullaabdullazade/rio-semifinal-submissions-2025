#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
   ll t; cin >> t;
   while(t--){
       ll n ; cin >> n;
       map<int,int>mp;
       ll arr[n];
       for(ll i = 0 ; i < n ; i++){
           cin >> arr[i];
           mp[arr[i]] = i;
       }
       ll ans = 1;
       sort(arr , arr + n);
       for(ll i = 0 ;  i < n -1; i++){
           if(abs(mp[arr[i]] - mp[arr[i+1]] ) != 1) ans++;
       }
       cout << ans << endl;
   }
}