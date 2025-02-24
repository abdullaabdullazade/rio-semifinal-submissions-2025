#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int l,r;
    cin>>l>>r;

    while(l<=r)
    {
        int s=0;

        if(l>0 && l<=9)
        {
            cout<<"Palindrome!"<<endl;
        }
       /*else if(l>9)
        {
            l = l%10;
            s = s + l;

        }*/
        else{
            cout<<l<<endl;
        }
        l++;
    }


}
