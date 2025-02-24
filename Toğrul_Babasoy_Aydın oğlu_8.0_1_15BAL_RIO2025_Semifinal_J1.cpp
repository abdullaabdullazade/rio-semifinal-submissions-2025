#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double int double
#define pb push_back
#define pf push_front

signed main(){
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--){
        int a,b,c;
        char d;
        cin>>a>>d>>b>>c;//10:00 60
        int x,y;
        x=c/60;//1
        y=c%60;//0
        int ansa;
        int ansb;
        ansa=a+x;//11
        ansb=b+y;//
        int numa=log10(ansa)+1;
        int numb=log10(ansb)+1;
        if(ansb>=60){
           ansa++;
           ansb=ansb%60;
        }
        if(ansa>=24){
           ansa=ansa%24;
        }
        if(numa==1){
           cout<<'0'<<ansa;
        }
        else{
           cout<<ansa;
        }
        cout<<':';
        if(numb==1){
           cout<<'0'<<ansb;
        }
        else{
           cout<<ansb;
        }
        cout<<'\n';
    }
}
