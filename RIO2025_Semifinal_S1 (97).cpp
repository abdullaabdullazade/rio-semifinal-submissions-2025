#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio();
    cin.tie();cout.tie();
    int l,r,k;
    cin>>l>>r;
    for(int i=l;i<=r;i++)
    {
        int s=0;
        k=i;
        while(k!=0)
        {
            s=s*10+k%10;
            k/=10;
        }
        if(s==i)
        {
            cout<<"Palindrome!"<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
