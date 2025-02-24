#include <bits/stdc++.h>
using namespace std;
int main() {
    int l,r;
    cin>>l>>r;
    for( int i=l ; i<=r ; i++){
        string s=to_string(i);
        if(s.length()==1){
            cout<<"Palindrome!"<<endl;
        }
        else {
            string m=s;
            reverse(m.begin(),m.end());
            if(m==s){
                cout<<"Palindrome!"<<endl;
            }
            else {
                cout<<s<<endl;
            }
        }
    }
}
