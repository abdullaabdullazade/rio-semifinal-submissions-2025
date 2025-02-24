#include <bits/stdc++.h>
using namespace std;

bool isP(long long x){
    string s=to_string(x);
    string r="";
    for(char i:s) r=i+r;
    if(s==r) return 1;
    return 0;
}

int main(){
    ios_base::sync_with_stdio();cout.tie(0);cin.tie(0);

    long long x,y;
    cin>>x>>y;

    for(long long i=x;i<=y;i++){
        if(isP(i)) cout<<"Palindrome!"<<endl;
        else cout<<i<<endl;
    }
}
