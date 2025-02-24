#include <bits/stdc++.h>
using namespace std;
bool pal(int n){
    string s=to_string(n);
    int j=s.size()-1;
    for(int i=0;i<j;i++){
        if(s[i]!=s[j])
        {
            return false;
        }
    }
    return true;
}
int main(){
    int l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        if(pal(i)==true){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}
