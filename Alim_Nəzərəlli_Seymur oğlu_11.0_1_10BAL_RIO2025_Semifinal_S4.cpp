#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n,k;
cin>>k>>n;
int a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cin>>b[i];
}
int mini=INT_MAX;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        mini=min(abs(a[i]-b[j]),mini);
    }
}
cout<<mini;
}
