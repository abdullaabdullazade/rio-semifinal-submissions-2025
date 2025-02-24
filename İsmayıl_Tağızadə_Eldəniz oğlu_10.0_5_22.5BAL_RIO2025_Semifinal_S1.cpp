#include <bits/stdc++.h>

using namespace std;

int main(){
   long long l,r,a,b,c,d,e,f,g;
   cin>>l>>r;
   for(int i=l;i<=r;i++){
        g=i/1000;
        a=i/100;
        b=i%10;
        c=i/10%10;
        d=i/100%10;
        e=i/1000%10;
        f=i/10000;
    if (i>0 and i<10  or a==b or a==b and c==d   )
        cout<<"Palindrome!"<<endl;
        else if(i>=1000 and i<10000 and g==b and d==c )
        cout<<"Palindrome!"<<endl;
        else if(i>=10000 and i<=99999 and f==b and c==e)
        cout<<"Palindrome!"<<endl;
        else
        cout<<i<<endl;
   }
}
