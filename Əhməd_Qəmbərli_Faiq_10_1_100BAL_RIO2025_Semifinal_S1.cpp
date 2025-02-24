#include "bits/stdc++.h"

using namespace std;

#define all(a)begin(a),end(a)

using ll = long long;
using str = string;

int main(){
    ll L, R;
    cin >> L >> R;

    for (; L <= R; L ++){
        str S = to_string(L);
        str T = S;

        reverse(all(T));

        if (S == T){
            cout << "Palindrome!" << endl;
        } else {
            cout << S << endl;
        }
    }
}