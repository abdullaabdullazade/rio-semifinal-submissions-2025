#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int a,b;
    cin>>a>>b;
    long long int ededsayi;
    for (long long int i = a; i<=b; i++) {
        if (i/10==0) {
            cout<<"Palindrome!"<<endl;
        } else {
            int ededsayi = 0;
            long long int k = i;
            while (k>0) {
                k = k/10;
                ededsayi++;
            }
            long long int bolmek = pow(10,(ededsayi-1));
            if (i%10==i/bolmek) {
                cout<<"Palindrome!"<<endl;
            } else {
                cout<<i<<endl;
            }
        }
    }
}
