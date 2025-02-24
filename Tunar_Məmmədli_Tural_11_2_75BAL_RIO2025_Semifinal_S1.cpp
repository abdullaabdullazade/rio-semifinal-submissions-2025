#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    int l, r;
    cin>>l>>r;
    for (int i=l; i<= r;++i){
        string d=to_string(i);
        if (*d.begin() == *d.rbegin()){
            cout<<"Palindrome!"<<endl;
        } else {
            cout<<d<<endl;
        }
    }
}
int main() {
    int t=1;
    //cin >> t;
    while (t--) solve();
}
