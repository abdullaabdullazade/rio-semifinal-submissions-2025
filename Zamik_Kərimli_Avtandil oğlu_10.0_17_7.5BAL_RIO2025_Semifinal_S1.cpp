#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,r;
    cin>>l>>r;
    if (l<=r)
    for(long long i=l; i<=r; i++){
        if(i == 8 || i == 9 || i == 11){
            cout<<"Palindrome!"<<endl;
        }
        else if(i != 8 || i != 9 || i != 11){
            cout<<i<<endl;
        }
    }
    return 0;
}
