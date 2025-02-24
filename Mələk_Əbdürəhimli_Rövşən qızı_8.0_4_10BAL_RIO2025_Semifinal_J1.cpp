#include <bits/stdc++.h>
using namespace std;
void solve(){
    int s1,d,a;
    char s;
    cin>>s1>>s>>a>>d;
    if(d<60){
        a+=d;
        if(a>60){
            s1+=a/60;
            a=a%60;
        }
        if(s1==24) s1=00;
    }
    if(d==60){
        s1+=1;
        if(s1==24) s1=00;
    }
    if(d>60){
        s1+=d/60;
        a+=d%60;
        if(s1==24) s1=00;
    }
    while(a%10==a){
        cout<<s1<<s<<0<<a<<endl;
        break;
    }
    cout<<s1<<s<<a<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
