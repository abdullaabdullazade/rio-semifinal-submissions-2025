#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,m;
    char c;
    int say1=0;
    int say2=0,ans;
       cin>>n>>m;
       int a[n],b[m];
       int g[n][m];
       ans=0;
       for(int i=0; i<n; i++){
           for(int j=0; j<m; j++){
               cin>>c;
               if(c=='1')
               g[i][j]=1;
               else
               g[i][j]=0;
           }
       }
       for(int i=0; i<n; i++){
           say1=0;
           for(int j=0; j<m; j++){
               say1=say1+g[i][j];
           }
           a[i]=say1;
       }
       for(int j=0; j<m; j++){
           say2=0;
           for(int i=0; i<n; i++){
               say2=say2+g[i][j];
           }
           b[j]=say2;
       }
       for(int i=0; i<n; i++){
           for(int j=0; j<m; j++){
               if((a[i]-g[i][j]==0 and b[j]-g[i][j]==0) or (a[i]-g[i][j]==m-1 and b[j]-g[i][j]==n-1))
             ans++;
           }
               
           }
           cout<<ans;
      
         
     
    }