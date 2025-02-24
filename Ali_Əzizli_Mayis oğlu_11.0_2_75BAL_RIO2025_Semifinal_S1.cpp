#include <bits/stdc++.h>

using namespace std;

/*bool check(string s) {
    int n = s.size();
    for(int i = 0; i < n / 2; i++) {
        if(s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}*/
bool f(long long n) {
    vector<long long> v;
    while(n != 0) {
        v.push_back(n % 10);
        n /= 10;
    }
    for(int i = 0; i < v.size() / 2; i++) {
        if(v[i] != v[v.size() - i - 1]) {
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
    for(long long i = l; i <= r; i++) {
        if(f(i)) {
           cout<<"Palindrome!"<<endl;
        }
        else {
            cout<<i<<endl;
        }
    }

    return 0;
}
