#include<bits/stdc++.h>
using namespace std;
int main(){
    int ch[100002],ans;
    int t;
    cin>>t;
    while(t--){
        int n;
        ans=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        for(int i=0;i<=n;i++){
            ch[i]=0;
        }
        for(int i=0;i<n;i++){
            ch[a[i]]++;
        }
        for(int i=1;i<=n;i++){
            ch[i]=ch[i]+ch[i-1];
        }
        int l=0;
        bool b=0;
        while(l<n){
            ans++;
            if(a[l]<a[l+1]){
                b=1;
            }
            else{
                b=0;
            }
            while(abs(ch[a[l]]-ch[a[l+1]])==1){
                l++;
                if(l==n-1){
                    break;
                }
                if(b){
                    if(a[l]>a[l+1]){
                        break;
                    }
                }
                else{
                    if(a[l]<a[l+1]){
                        break;
                    }
                }
            }
            l++;
        }
        cout<<ans<<endl;
    }
}
