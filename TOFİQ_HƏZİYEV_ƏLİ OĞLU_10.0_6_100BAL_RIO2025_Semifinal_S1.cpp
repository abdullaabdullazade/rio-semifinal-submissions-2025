#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int x,y;
    cin>>x>>y;
    for (long long int i = x; i<=y; i++) {
        long long int say = 0 ;
        string reqem = to_string(i);
            for (int j = 0; j<(reqem.size()/2); j++) {
                if (reqem[j]==reqem[reqem.size()-j-1]) {
                    say++;
                }
            }
           if (say==(reqem.size()/2)) {
            cout<<"Palindrome!"<<endl;
           } else {
               cout<<i<<endl;
           }
    }
}



