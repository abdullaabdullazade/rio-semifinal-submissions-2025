#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool plain(ll n){
string s=to_string(n);
int l=0,r=s.size()-1;
int t=0;
while(l<=r){
    if(s[l]==s[r]){
        t++;
    }
if(s.size()%2==0&&t==s.size()/2){
    return true;
}
else if(s.size()%2!=0&&t==s.size()/2+1){
    return true;
}
else{
    return false;
}
}
}
int main(){
ll n,m;
cin>>n>>m;
for(int i=n;i<=m;i++){
    if(plain(i)){
        cout<<"Palindrome!\n";
    }
    else{
        cout<<i<<endl;
    }
}
}
