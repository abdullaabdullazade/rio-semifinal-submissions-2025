#include <bits/stdc++.h>
#define int long long
using namespace std;
bool pali(int n){
    string s = to_string(n);
    string ss = string(s.rbegin() , s.rend());
    return s == ss;
}
signed main(){
    int l , r;
    cin >> l >> r;
    for(int i = l; i <= r;++i){
        if(pali(i)){
            cout << "Palindrome!" << endl;
        }
        else{
            cout << i << endl;
        }
    }

}
