#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, i, k;
    cin >> n >> k;
    string s;

    for(i = n;i <= k;i++){
        s = to_string(i);
        int l = 0, r = s.size() - 1;
        while(l <= r){
            if(s[l] != s[r]){
                cout << s << endl;
                break;
            }
            l++; r--;
        }
        if(l > r){
            cout << "Palindrome!" << endl;
        }
    }
}
