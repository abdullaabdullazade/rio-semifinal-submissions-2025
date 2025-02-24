#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        int s[i];
        if(i == 8 || i == 9 || i == 11){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}
