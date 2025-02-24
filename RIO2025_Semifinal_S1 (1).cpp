#include <bits/stdc++.h>

using namespace std;
#define intt long long
int main(){
    intt l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
       string s=to_string(i);bool t=true;
       long long h=s.length();

       for(int i=0;i<h/2;i++){
        if(s[i]!=s[h-i-1]){
            t=false;
            cout<<s<<endl;
            break;
        }
       }
       if(t){
        cout<<"Palindrome!"<<endl;
       }

    }

}
