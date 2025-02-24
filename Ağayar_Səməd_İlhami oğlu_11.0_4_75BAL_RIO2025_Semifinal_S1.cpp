#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool ters(ll i){
    string s=to_string(i);
    string eks=s;
    reverse(eks.begin(),eks.end());
    if(s==eks)return true;
    else{return false;}
}

int main()
{

    ll l, r;
    cin>>l>>r;
    for(int i=l; i<=r; i++){
        if(ters(i)==true)cout<<"Palindrome!"<<"\n";
        else{cout<<i<<"\n";}
    }
    return 0;
}
