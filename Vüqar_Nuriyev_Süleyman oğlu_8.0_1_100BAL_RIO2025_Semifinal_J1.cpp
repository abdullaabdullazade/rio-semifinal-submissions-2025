#include <bits/stdc++.h>
using namespace std;
int s[10000];
int main()
{
    long long n,a,b,c=0,m,a1,b1,c1;
    string x,y,z,q;
    bool d=true;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x>>m;
        z=x.substr(3);
        q=x.substr(0,2);
        b=stoi(z);
        a=stoi(q);
        c=a*60+b+m;
        if(c/60<10){
            cout<<0<<c/60;
        }
        else if(c/60<24){
            cout<<c/60;
        }
        else if(c/60>=24){
            if(c/60%24>9){
                cout<<c/60%24;
            }
            else if(c/60%24==0){
                cout<<0<<0;
            }
            else{
                cout<<0<<c/60%24;
            }
        }
        cout<<":";
        if(c%60<10){
            cout<<0<<c%60;
        }
        else{
            cout<<c%60;
        }
        cout<<endl;
    }
}
