#include<bits/stdc++.h>
#include <cmath>
#define ll long long
#define str string
#define maksi 9999999999999
#define mini -1919919199119
using namespace std;
int main()
{
    ll l , r, i, j;
    cin>>l>>r;
    for(i=l; i<=r; i++)
    {
        ll say=0;
        ll m=i;
        while(m!=0)
        {
            m/=10;
            say++;
        }
        ll saygac=0;
        for(j=0; j<say; j++)
        {
            ll k=pow(10,j);
            ll h=pow(10, say-j-1);
            if(i/k%10!=i/h%10){saygac++; break;}
        }
        if(saygac!=0)
        {
            cout<<i<<endl;
        }
        else
        {
            cout<<"Palindrome!"<<endl;
        }
    }
}
