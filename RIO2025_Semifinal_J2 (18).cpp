#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void solve(){
int n; cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}for(int j=0;j<n;j++) cin>>b[j];
sort(a,a+n);
int l=0;
int say=0;
int x=0;
int ans=1;
while(l<=n-1){
    for(int j=0;j<n;j++){
        if(a[l]>=b[j]) say++;
    }ans*=(say-x);
    say=0;
    x++;
    l++;
}cout<<ans<<endl;;

}int main(){
int t;
cin>>t;
while(t--){
solve();
}
}

