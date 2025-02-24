#include<bits/stdc++.h>
using namespace std;

bool p(long long a){
    long long a_ilk=a;
    long long eded=0;
    if(a<10) return true;
    while(a>0){
        eded=eded*10+a%10;
        a=a/10;
    }
    if(eded==a_ilk) return true;
    return false;

}
int main(){
long long a,b;
cin>>a>>b;
for(long long i=a;i<=b;i++){
    if(p(i)) cout<<"Palindrome!"<<endl;
    else cout<<i<<endl;

}


}
