#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll l, r;
    cin>>l>>r;
    for(int i=l; i<=r; i++){
        string s=to_string(i);
        string eks=s;
        reverse(eks.begin(), eks.end());
        if(s==eks)cout<<"Palindrome!"<<"\n";
        else{cout<<i<<"\n";}
    }
    return 0;
}
