#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int a,b;
    cin>>a>>b;
    for (long long int i = a; i<=b; i++) {
        bool ok = false;
        long long int say = 0;
        string reqem = to_string(i);
            for (int j = 0; j<(reqem.size()/2); j++) {
                if (reqem[j]==reqem[reqem.size()-j-1]) {
                    ok = true;
                    say++;
                } else {
                    ok = false;
                }
            }
        if (say==(reqem.size()/2)) {
            cout<<"Palindrome!"<<endl;
        } else {
            cout<<i<<endl;
        }
    }
}

