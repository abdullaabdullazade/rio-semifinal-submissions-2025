#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        bool b=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(a[0]>a[1]){
            for(int i=1;i+1<n;i++){
                if(a[i]<a[i+1]){
                    b=1;
                    break;
                }
            }
        }
        else{
            for(int i=1;i+1<n;i++){
                if(a[i]>a[i+1]){
                    b=1;
                    break;
                }
            }
        }
        if(b){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
}
