#include <bits/stdc++.h>
using namespace std;
#define int long long


signed main(){
    int l,r;
    cin>>l>>r;
    for(int i=l; i<=r; ++i){
        string r = to_string(i);
        string s = r;
        reverse(r.begin(), r.end());
        if(r == s){
            cout<<"Palindrome!"<<endl;
        }
        else cout<<s<<endl;
    }
}
