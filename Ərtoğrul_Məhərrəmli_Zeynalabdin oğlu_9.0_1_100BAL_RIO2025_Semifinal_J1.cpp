#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main()
{
    int t;
    cin>>t;
    int a,b,d,a1,b1,k;
    char c;
    while(t--){
        cin>>a>>c>>b>>d;
        k=d/60;
        b=b+d%60;
        k=k+b/60;
        b=b%60;
        a=a+k;
        a=a%24;
        if(a<10){
            cout<<'0'<<a;
        }
        else
            cout<<a;
        cout<<":";
        if(b<10)
            cout<<"0"<<b;
        else
            cout<<b;
        cout<<endl;

    }
}
