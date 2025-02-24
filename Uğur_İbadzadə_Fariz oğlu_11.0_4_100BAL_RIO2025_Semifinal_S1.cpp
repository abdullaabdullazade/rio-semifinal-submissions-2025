#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long l,r;
    cin>>l>>r;
    for(long long i=l;i<=r;i++){
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
