#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool ters(ll i){
    string s;
    ll kopi=i;
    while(i!=0){
        s=s+to_string(i%10);
        i/=10;
    }
    if(stoi(s)==kopi)return true;
    else{return false;}
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll l, r;
    cin>>l>>r;
    for(ll i=l; i<=r; i++){
        if(ters(i)==true)cout<<"Palindrome!"<<"\n";
        else{cout<<i<<"\n";}
    }
    return 0;
}
