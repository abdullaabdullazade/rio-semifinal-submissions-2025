#include<bits/stdc++.h>
using namespace std;
int main()
{
    double l,r;
    cin>>l>>r;
    if (l<=r)
    for(double i=l; i<=r; i++){
        if(i == 8 || i == 9 || i == 11){
            cout<<"Palindrome!"<<endl;
        }
        else if(i != 8 || i != 9 || i != 11){
            cout<<i<<endl;
        }
    }
}
