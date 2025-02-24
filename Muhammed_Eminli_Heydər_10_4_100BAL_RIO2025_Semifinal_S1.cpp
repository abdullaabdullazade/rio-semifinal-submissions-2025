#include <bits/stdc++.h>
using namespace std;
int main(){
    long long l, r;
    cin>>l>>r;
    for(long long i = l; i <= r; i++){
        string x = to_string(i);
        string y = string(x.rbegin(), x.rend());
        if(x == y) cout<<"Palindrome!"<<endl;
        else cout<<i<<endl;
    }
    return 0;
}
