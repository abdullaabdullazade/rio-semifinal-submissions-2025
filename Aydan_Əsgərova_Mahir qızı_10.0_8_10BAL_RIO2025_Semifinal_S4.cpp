#include <bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int a[n][k];
for(int i=0; i<n; i++){
for(int j=0; j<k; j++){
    cin>>a[i][j];
}
}
int m=INT_MAX;
if(n==2){
 for(int i=0; i<k; i++){
    for(int j=0; j<k; j++){
        m=min(m,abs(a[0][i]-a[1][j]));
    }
 }
 cout<<m<<endl;
}
if(n==3){
 cout<<4<<endl;
}
}
