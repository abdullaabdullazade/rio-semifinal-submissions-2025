#include<bits/stdc++.h>
using namespace std;
int main(){
    long long l,r;
    cin>>l>>r;
    int a,x,j;
    for(long long i=l; i<=r; i++){
        j=i;
        x=0;
        while(j>0){
                a=j%10;
                x=x*10+a;
                j=j/10;
        }
        if(x!=i){
            cout<<i<<endl;
        }
        else{
            cout<<"Palindrome!"<<endl;
        }
    }
}
