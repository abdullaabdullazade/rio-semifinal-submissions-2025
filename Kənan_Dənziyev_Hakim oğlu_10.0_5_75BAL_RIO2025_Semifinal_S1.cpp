#include<bits/stdc++.h>
using namespace std;


bool palindrom(int n){

int revnum = 0,temp = n;
while(temp != 0){
    revnum = revnum*10 + temp%10;
    temp/=10;
}
return revnum == abs(n);
}
int main(){

    int l,r;cin>>l>>r;

    for(int i = l;i<=r;i++){
        if(palindrom(i)){
            cout<<"Palindrome!"<<endl;
        }
        else{
        cout<<i<<endl;
        }
    }


}
