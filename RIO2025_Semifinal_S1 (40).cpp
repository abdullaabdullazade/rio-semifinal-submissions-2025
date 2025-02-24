#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        if(i<10){
            cout<<"Palindrome!"<<endl;
        }
        else cout<<i<<endl;
    }
}
