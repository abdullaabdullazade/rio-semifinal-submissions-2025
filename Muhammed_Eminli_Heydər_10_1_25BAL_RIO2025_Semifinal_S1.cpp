#include <bits/stdc++.h>
using namespace std;
int main(){
    long long l, r;
    cin>>l>>r;
    for(long long i = l; i <= r; i++){
        if(i / 10 < 1) cout<<"Palindrome!"<<endl;
        else if(i % 11 == 0) cout<<"Palindrome!"<<endl;
        else cout<<i<<endl;
    }
    return 0;
}
