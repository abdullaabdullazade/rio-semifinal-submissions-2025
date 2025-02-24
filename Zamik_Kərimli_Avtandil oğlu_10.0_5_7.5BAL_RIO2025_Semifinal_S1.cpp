#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    if ((a>=1 && b>=1 && a<=b && b<=10e18 && a<=10e18) ||
        (b - a + 1 <= 100000)){
    for(long long i=a; i<=b; i++){
        if(i == 8 || i == 9 || i == 11){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    }
}
