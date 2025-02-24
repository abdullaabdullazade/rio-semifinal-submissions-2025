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
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        char d;
        cin>>a>>d>>b>>c;
        int x=c/60;
        int y=c%60;
        int ansa=a+x;
        int ansb=b+y;
        if(ansb>=60){
        ansa+=(ansb/60);
        ansb=ansb%60;
        }
        if(ansa>=24){
        ansa=ansa%24;
        }
        if(ansa<10 || ansa==0) cout<<0<<ansa;
        else cout<<ansa;
        cout<<':';
        if(ansb<10 || ansb==0) cout<<0<<ansb;
        else cout<<ansb;
        cout<<endl;
    }
}
