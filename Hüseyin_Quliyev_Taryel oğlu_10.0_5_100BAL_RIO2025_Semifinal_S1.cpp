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
int l,r;
cin>>l>>r;
for(int i=l;i<=r;i++){
 string s1,s2;
       s1=to_string(i);
       s2=s1;
       reverse(all(s2));
     if(s1==s2){
        cout<<"Palindrome!"<<endl;
     }
      else{
        cout<<i<<endl;
     }
     }}
signed main(){
int t=1;
fastio
//cin>>t
while(t--){
    guliyev();
}
}
//Husu but in love with S version
