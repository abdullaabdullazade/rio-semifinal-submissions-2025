#include<bits/stdc++.h>
using namespace std;
#define sti string
#define elif else if
signed main(){
    cin.tie(NULL)->sync_with_stdio(0);
    int n,m,say=0;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
          sti s;
          cin>>s;
          for(int j=0; j<m; j++){
            if(s[j]=='0'){a[i][j]=0;}
            else{a[i][j]=1;}}}


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           int cem=0,cem1=0;
           int p=a[i][j];
           for(int x=0; x<n; x++){
                if(x!=i){cem+=a[x][j]; cem1++;}}
            for(int y=0; y<m; y++){
                if(y!=j){cem+=a[i][y];cem1++;}}
                int o=(n-1)*(m-1);

           if(cem==0||(cem==cem1)){say++;}}}
     cout<<say;}



















































































































































