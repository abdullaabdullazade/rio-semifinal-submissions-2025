#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ll n,m;
cin>>n>>m;
ll a[n][m];
ll sutundasif[m],setirdesif[n],sutundabir[m],setirdebir[n];
for(int i=0;i<n;i++){
        string s;
        cin>>s;
    for(int j=0;j<m;j++) a[i][j]=s[j]-48;
}
for(int i=0;i<n;i++){
        ll cnts=0,cntb=0;

    for(int j=0;j<m;j++){
        if(a[i][j]==0) cnts++;
        else cntb++;
    }
    setirdesif[i]=cnts;
    setirdebir[i]=cntb;
}
for(int j=0;j<m;j++){
        ll cnnts=0,cnntb=0;
    for(int i=0;i<n;i++){
        if(a[i][j]==0) cnnts++;
        else cnntb++;
    }
    sutundasif[j]=cnnts;
    sutundabir[j]=cnntb;
}
ll cnt=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        ll setirdesifk=setirdesif[i];
        ll setirdebirk=setirdebir[i];
        ll sutundasifk=sutundasif[j];
        ll sutundabirk=sutundabir[j];
        if(a[i][j]==0){
            sutundasifk--;
            setirdesifk--;
        }
        else{
            sutundabirk--;
            setirdebirk--;
        }
        if(setirdesifk==sutundasifk and sutundasifk==0){
            cnt++;
        }
        else if(setirdebirk==sutundabirk and setirdebirk==0){
            cnt++;
        }
    }
}
cout<<cnt<<endl;
}
