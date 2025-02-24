// 11:14:59 -> 14:14:59
// A-> 0
// B-> 0
// C-> 0
// D-> 0
#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define endl "\n"
void solve(){
    string s;
    cin>>s;
    int d;
    cin>>d;
    int saat=d/60;
    int deq=d-saat*60;
    string s1=s.substr(0,2);
    int n1=stoi(s1)+saat;
    string s2=s.substr(3,2);
    int n2=stoi(s2)+deq;
    int n3,n4;
    if(n2>=60){
        n3=n2/60;
        n2=n2-n3*60;
        n1+=n3;
    }
    if(n1>=24){
        n4=n1/24;
        n1=n1-n4*24;
    }
    if(n1<10){
        cout<<0<<n1;
    }
    else{
        cout<<n1;
    }
    cout<<":";
    if(n2<10){
        cout<<0<<n2;
    }
    else{
        cout<<n2;
    }
    cout<<endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int tt=1;
    cin>>tt;
    while(tt--)
    solve();
}
