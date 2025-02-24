#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    int l, r;
    cin>>l>>r;
    for (int i=l; i<= r;++i){
        string d=to_string(i);
        int a=d.size()/2;
        bool ok=true;
        for(int i=0;i<a;++i){
            if(d[i]!=d[a-i]){
                ok=false;
            }
        }
        if(ok){
            cout<<"Palindrome!"<<endl;
        } else {
            cout<<d<<endl;
        }
        //if(d==reverse_copy(d)){
        //    cout<<"Palindrome!"<<endl;
        //} else {
        //    cout<<d<<endl;
        //}
    }
}
int main() {
    int t=1;
    //cin >> t;
    while (t--) solve();
}
