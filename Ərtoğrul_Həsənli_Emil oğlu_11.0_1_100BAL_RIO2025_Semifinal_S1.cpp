#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void isP(ll i){
    if(i<10){
        cout<<"Palindrome!"<<endl;
        return;
    }
    ll p1,p2;
    int len=log10(i)+1;

    for(int j=1;j<=len/2;j++){
        p1=pow(10,j-1),p2=pow(10,len-j);
        //cout<<i/p1%10<<' '<<i/p2%10<<endl;
        if(i/p1%10 != i/p2%10){
            cout<<i<<endl;
            return;
        }
    }

    cout<<"Palindrome!"<<endl;
}



int main(){
    cin.tie(0);
    cout.tie(0);


    ll l,r;
    cin>>l>>r;
    for(;l<=r;l++){
        isP(l);
    }
}
