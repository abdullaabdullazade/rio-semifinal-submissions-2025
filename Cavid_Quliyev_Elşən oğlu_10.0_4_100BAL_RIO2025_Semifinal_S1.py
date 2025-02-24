#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a,b;
    ll n,r,i;
    cin>>n>>r;
    for(i=n;i<=r;i++){
        string ic=to_string(i);
        string icc=ic;
        reverse(icc.begin(),icc.end());
        if(icc==ic){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }

}
