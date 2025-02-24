#include <bits/stdc++.h>
using namespace std;
int main(){
    long long l,r;
    cin>>l>>r;
    for(long long i=l;i<=r;i++){
        int say=0;
        bool k=true;
        long long f=i;
        while(f>0){
            say++;
            f/=10;
        }
        if(i/10==0){
            cout<<"Palindrome!"<<endl;
            continue;
        }
        long long d=1;
        for(int e=0;e<say/2;e++){
            d*=10;
        }
        long long d1=1;
        for(int e=0;e<say/2;e++){
            d1*=10;
        }
        string s=to_string(i%d1);
        string s1=to_string(i/d);
        for(int a=0;a<s1.size();a++){
            if(s[s.size()-a-1]!=s1[a]){
                k=false;
                break;
            }
        }
        if(k){
            cout<<"Palindrome!"<<endl;

        }
        else{
            cout<<i<<endl;
        }
    }
}
