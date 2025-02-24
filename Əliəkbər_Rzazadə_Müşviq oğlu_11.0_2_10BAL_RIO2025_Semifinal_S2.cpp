#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n],a[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            a[i]=arr[i];
        }
        sort(a,a+n);
        bool k=true;
        for(int i=0;i<n;i++){
            if(a[i]!=arr[i]){
                k=false;
                break;
            }
        }
        if(k){
            cout<<1<<endl;
            continue;
        }
        bool f=true;
        for(int i=n-1;i>=0;i--){
            if(a[i]!=arr[n-i-1]){
                f=false;
                break;
            }
        }
        if(f){
            cout<<1<<endl;
            continue;
        }
        cout<<2<<endl;
    }
}
