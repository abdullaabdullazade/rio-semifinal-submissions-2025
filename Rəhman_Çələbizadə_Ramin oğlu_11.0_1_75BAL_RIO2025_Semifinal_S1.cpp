#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define fi first
#define se second
#define ln endl
#define faster cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(0);
using namespace std;
bool polindrome(string a){
    string rvs = a;
    reverse(all(a));
    if(a == rvs) return true;
    return false;
}

int main()
{
    faster
    ll l , r;
    cin >> l >> r;
    for(int i = l ; i <= r; i++){
        if(polindrome(to_string(i))){
            cout << "Palindrome!" << "\n";
        }
        else cout << i << "\n";
    }

}
