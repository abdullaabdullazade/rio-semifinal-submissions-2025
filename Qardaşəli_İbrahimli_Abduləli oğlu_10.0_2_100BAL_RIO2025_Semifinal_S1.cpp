#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long l, r;
    cin >> l >> r;
    for(long long i = l; i <= r; i++) {
        string s = to_string(i);
        bool flag = true;
        for(int j = 0; j < s.length(); j++) {
            if(s[j] != s[s.length() - j - 1]) {
                flag = false;
            }
        }
        if(flag) cout << "Palindrome!" << endl;
        else cout << i << endl;
    }
    return 0;
}