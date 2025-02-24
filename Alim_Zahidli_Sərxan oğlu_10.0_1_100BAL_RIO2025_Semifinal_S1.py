#include<bits/stdc++.h>
using namespace std;
int main(){

long long l,r,i,i1,a,b,a1,b1;
int say=0,say1,j=0,k=0;
cin>>l>>r;
for (i=l; i<=r; i++){
    i1=i;
    while(i1!=0){
        say++;
        i1=i1/10;
    }
    say1=say/2;
    while(say1>0){
     a1= pow(10,say-1);
     b1= pow(10,j);
     a= i/a1;
     b= i/b1%10;
        if(a!=b){
            k++;
        }

        say--;
        j++;
        say1--;

    }
    if(k==0){
        cout<<"Palindrome!"<<endl;
    }
    else
        cout<<i<<endl;

    say=0;
    k=0;
}
return 0;
}
