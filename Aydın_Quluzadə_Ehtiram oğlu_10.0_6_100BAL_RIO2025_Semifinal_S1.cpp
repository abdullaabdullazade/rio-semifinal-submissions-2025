#include<bits/stdc++.h>
using namespace std;
int main(){
    long long l,r;
    cin>>l>>r;
    if(l==r){
        long long k=0;
        while(l!=0){
            k=k*10+(l%10);
            l/=10;
        }
        if(r==k)
            cout<<"Palindrome!"<<endl;
            else cout<<r<<endl;
    }
    if(l!=r){
    r++;
    while(l!=r){
     if(l<10){
            cout<<"Palindrome!"<<endl;
     }
     else{
            long long k=0,lc=l;
        while(lc!=0){
            k=k*10+(lc%10);
            lc/=10;
        }
        if(k==l){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<l<<endl;
        }
     }
     if(l==r)
        return 0;
     l++;
    }
    }
}

