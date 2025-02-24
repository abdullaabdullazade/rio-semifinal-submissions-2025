#include<bits/stdc++.h>
using namespace std;
int main(){
    long long l,r;
    cin>>l>>r;
    int a,x,j;
    x=0;
    j=0;
    for(long long i=l; i<=r; i++){
        j=i;
        while(j>0){
                a=j%10;
                x=x*10+a;
                j=j/10;
        }
        if(x==i){
            cout<<"Palindrome!"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
}
