#include <bits/stdc++.h>

using namespace std;

bool check(string s) {
    int n = s.size();
    for(int i = 0; i < n / 2; i++) {
        if(s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio();
    cin.tie(0);
    cout.tie(0);

    long long l, r;
    cin>>l>>r;
    for(int i = l; i <= r; i++) {
        if(check(to_string(i))) {
           cout<<"Palindrome!"<<endl;
        }
        else {
            cout<<i<<endl;
        }
    }

    return 0;
}
