#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int a,b;
    cin>>a>>b;
    long long int ededsayi;
    for (int i = a; i<=b; i++) {
        if (i/10==0) {
            cout<<"Palindrome!"<<endl;
        } else {
            if (i%10==i/10) {
                cout<<"Palindrome!"<<endl;
            } else {
                cout<<i<<endl;
            }
        }
    }
}
