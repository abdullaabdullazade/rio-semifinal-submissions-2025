#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a,b,c=0,m,a1,b1,c1,k,l,p;
    string x,y,z,q;
    bool d=true;
    bool h=true;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        int s[a];
        int sc[a];
        d=true;
        for(int j=0;j<3;j++){
            cin>>s[j];
            sc[j]=s[j];
        }
        sort(sc,sc+a);
        k=s[0];
        l=s[1];
        p=s[2];
        s[0]=l;
        s[1]=p;
        s[2]=k;
        if(s[0]==sc[0] and s[1]==sc[1] and s[2]==sc[2] and d==true){
            cout<<"Yes"<<endl;
            d=false;
        }
        k=s[0];
        l=s[1];
        p=s[2];
        s[0]=l;
        s[1]=p;
        s[2]=k;
        if(s[0]==sc[0] and s[1]==sc[1] and s[2]==sc[2] and d==true){
            cout<<"Yes"<<endl;
            d=false;
        }
        k=s[0];
        l=s[1];
        p=s[2];
        s[0]=l;
        s[1]=p;
        s[2]=k;
        if(s[0]==sc[0] and s[1]==sc[1] and s[2]==sc[2] and d==true){
            cout<<"Yes"<<endl;
            d=false;
        }
        k=s[0];
        l=s[1];
        p=s[2];
        s[0]=l;
        s[1]=p;
        s[2]=k;
        if(s[0]==sc[0] and s[1]==sc[1] and s[2]==sc[2] and d==true){
            cout<<"Yes"<<endl;
            d=false;
        }
        if(d==true)
        cout<<"No"<<endl;
    }
}
