#include <bits/stdc++.h>
using namespace std;
int main(){
   long t;
   cin>>t;
   while(t--){
    map<long,long>h;
    map<long,long>m;
    long n;
    cin>>n;
   // if(n==1){
    //    cout<<1<<endl;
   // continue;}
    long a[n],b[n];
    vector<long>ans;
    for(long i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
   }
   sort(b,b+n);
   long g=1;
   for(long i=0;i<n;i++){
        if(h[b[i]]==0){
        m[b[i]]=i+1;
        }
        h[b[i]]++;
   }
   map<long,long>s;
   for(long i=0;i<n;i++){
        ans.push_back(m[a[i]]+s[a[i]]);
        s[a[i]]++;
    }
    //for(long h:ans){
   //     cout<<h<<" ";
    //}
    long say=1,temp=0;
    int x=0;
    long i=1;
    while(i<n){
        if(ans[i]==ans[i-1]+1){
        while(i<n and ans[i]==ans[i-1]+1){
                i++;
        }}
        else if(ans[i]==ans[i-1]-1){
        while(i<n and ans[i]==ans[i-1]-1){
                i++;
        }
        }
        else{
            //cout<<
            say++;
            i++;
        }
    }
    cout<<say<<endl;

   }

}
