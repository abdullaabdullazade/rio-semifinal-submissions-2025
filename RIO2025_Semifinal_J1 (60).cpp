//RIO2025_11762
//GGCDbrxbk
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define sti string
#define elif else if
signed main(){
    cin.tie(NULL)->sync_with_stdio(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        sti s; int x;
        cin>>s>>x;
        sti s1=s.substr(0,2);
        sti s2=s.substr(3);
        int a=stoi(s1);
        int b=stoi(s2);
        int deq=a*60+b+x;
        int c1=(deq/60)%24;
        int c2=deq%60;
        if(c1<10){cout<<'0'<<c1<<':';}
        else{cout<<c1<<':';}
        if(c2<10){cout<<'0'<<c2<<endl;}
        else{cout<<c2<<endl;}}}




















































































































