#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int tt;
cin>>tt;
while(tt--){
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
        c[i]=a[i];
    }
    sort(b,b+n);
    sort(c,c+n);
    reverse(b,b+n);
    bool st=true,rst=true;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            st=false;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=c[i]){
            rst=false;
        }
    }
    if(st||rst){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
}
}
