#include <bits/stdc++.h>
using namespace std;
int main(){
    long l,r;
    cin>>l>>r;
    for(long i=l;i<=r;i++){
        string s=to_string(i);
        string sr=s;
        reverse(s.begin(),s.end());
        if(s==sr)
            cout<<"Palindrome!";
        else cout<<i;
        cout<<endl;
    }
}
