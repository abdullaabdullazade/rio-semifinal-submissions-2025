#include<bits/stdc++.h>
using namespace std;
bool ispol(long long a){
    long long ac=a,poli=0;
    while(ac>0){
        poli=poli*10+ac%10;
        ac/=10;
    }
    if(poli==a){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    long long a,b;
    cin>>a>>b;
    for(long long i=a;i<=b;i++){
        if(ispol(i)){
            cout<<"Palindrome!";
        }
        else{
            cout<<i;
        }
        cout<<endl;
    }
}
