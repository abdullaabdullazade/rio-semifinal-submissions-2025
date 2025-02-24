#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    int say=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i]-1==a[i+1]||a[i]+1==a[i+1]){
            continue;
        }
        else{
            say++;

        }
    }
    cout<<say+1<<endl;
}
}
