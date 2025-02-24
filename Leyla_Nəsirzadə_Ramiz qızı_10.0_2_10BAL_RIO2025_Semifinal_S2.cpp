#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
        cin>>n;
        long long a[n], b[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a, a+n);
        long long cnt=0;
        for(int i=0; i<n; i++){
        if(a[i]==b[i]){
            cnt++;
        }
        }
        if(cnt==n){
            cout<<1<<endl;
            return;
        }
        reverse(a, a+n);
        cnt=0;
        for(int i=0; i<n; i++){
            if(a[i]==b[i]){
                cnt++;
            }
        }
        if(cnt==n){
            cout<<1<<endl;
            return;
        }
            cout<<2<<endl;
}
int main(){
      ios::sync_with_stdio(0);
      cin.tie(0);
      cout.tie(0);
      long long t;
      cin>>t;
      while(t--){
    solve();
        }
      }
