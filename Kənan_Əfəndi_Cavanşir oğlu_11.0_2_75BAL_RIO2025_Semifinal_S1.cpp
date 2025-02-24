#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    for(long long i=a;i<=b;i++){
        string s=to_string(i);
        string ss;
        for(int j=s.size()-1;j>=0;j--){
            ss=ss+s[j];
        }
        if(s==ss){
            cout<<"Palindrome!"<<endl;
        }
        else
            cout<<i<<endl;
    }

    return 0;
}
