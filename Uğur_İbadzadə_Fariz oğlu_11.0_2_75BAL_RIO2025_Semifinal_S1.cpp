#include<bits/stdc++.h>

using namespace std;

int main(){
    long long l,r;
    cin>>l>>r;
    for(int i=l;i<=r;i++){
        string s;
        s=to_string(i);
        int sz=s.size();
        bool b=true;
        for(int i=0;i*2<sz;i++){
            if(s[i]!=s[sz-1-i]){
                b=false;
                break;
            }
        }
        if(b){
            cout<<"Palindrome! \n";
        }else{
            cout<<i<<"\n";
        }
    }



    return 0;
}
