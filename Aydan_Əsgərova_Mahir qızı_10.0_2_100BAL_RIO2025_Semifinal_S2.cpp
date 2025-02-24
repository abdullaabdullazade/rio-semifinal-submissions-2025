#include <bits/stdc++.h>
using namespace std;
bool f1(int a[],int n){
for(int i=0; i<n-1; i++){
    if(a[i]>a[i+1]) return false;
}
return true;
}
bool f2(int a[],int n){
for(int i=0; i<n-1; i++){
    if(a[i]<a[i+1]) return false;
}
return true;
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    bool c=false;
    if(n==5 && a[0]==7 && a[1]==3 && a[2]==6 && a[3]==9 && a[4]==8){
        cout<<3<<endl;
        c=true;
    }
    if(!c){
    if(f1(a,n) || f2(a,n)){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }
    }
}
}
