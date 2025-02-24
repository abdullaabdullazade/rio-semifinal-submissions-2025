#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long l,r;
    cin>>l>>r;
    while(l < r+1){
        if( 0 <= l && l <= 9) cout<<"Palindrome!"<<endl;
        else if(l%11 == 0 && (l%10 == l/10%10)) cout<<"Palindrome!"<<endl;
        else cout<<l<<endl;
        l++;
    }
}
