#include <bits/stdc++.h>
using namespace std;
#define int long long

bool is(int n){
    vector<int>v;
    while(n > 0){
        int x = n % 10;
        v.push_back(x);
        n /= 10;
    }
    for(int i = 0; i < v.size(); ++i){
        if(v[i] != v[v.size() - i - 1]){
            return false;
        }
    }
    return true;
}

signed main(){
    int l, r;
    cin >> l >> r;
    for(int i = l; i <= r; ++i){
            if(is(i)){
                cout << "Palindrome!" << endl;
            }else{
                cout << i << endl;
            }
    }

}
