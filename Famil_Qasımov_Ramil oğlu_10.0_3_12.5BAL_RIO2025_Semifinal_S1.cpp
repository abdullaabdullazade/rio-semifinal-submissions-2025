#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9+7;

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int l,r;
    cin >> l >> r;
    for(int i = l;i<=r;i++){
        if(i<10){
            cout << "Palindrome!" << endl;
        }
        else if(i<100 && i%11==0){
            cout << "Palindrome!" << endl;
        }
        else{
            string s="";
            int a = i;
            while(a>0){
                char c = a%10 - '0';
                s+=c;
                a = a/10;
            }
            string s1=s;
            reverse(s.begin(),s.end());
            if(s==s1){
                cout << "Palindrome!" << endl;
            }
            else cout << i << endl;
        }
    }
}
