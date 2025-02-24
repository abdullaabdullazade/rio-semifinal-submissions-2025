#include<bits/stdc++.h>
using namespace std;
bool f(long long n){
    string s=to_string(n);
    if(s.length()==1){
        return true;
    }
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[s.length()-i-1]){
            return false;
        }
    }
    return true;
}
int main()
{
    long long l,r;
    cin>>l>>r;
    for(long long i=l;i<=r;i++){
        if(f(i)){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}
