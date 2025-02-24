#include <bits/stdc++.h>
using namespace std;
int main()
{
 long long l, r;
 cin>>l>>r;
 for(long long i = l; i <=r;i++){
    if(i/10 == 0){
        cout<<"Palindrome!"<<endl;
    }
 else if(i >= 10 && i <= 99&& i%10 != 0 && i/10 == i%10){
    cout<<"Palindrome!"<<endl;}
    else{
        cout<<i<<endl;
    }

 }
}
