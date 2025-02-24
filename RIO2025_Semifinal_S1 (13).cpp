#include <bits/stdc++.h>

using namespace std;

bool ters(int i){
    string s=to_string(i);
    string eks=s;
    reverse(eks.begin(),eks.end());
    if(s==eks)return true;
    else{return false;}
}

int main()
{

    int l, r;
    cin>>l>>r;
    for(int i=l; i<=r; i++){
        if(ters(i)==true)cout<<"Palindrome!"<<"\n";
        else{cout<<i<<"\n";}
    }
    return 0;
}
