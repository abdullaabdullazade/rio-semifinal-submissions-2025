#include <bits/stdc++.h>
#define ll long long
#define int ll
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vi vector<int>
#define pb push_back
#define nl '\n';
using namespace std;

// priority_queue<int, vector<int>, greater<int>> pq;
// A 65 Z 90 / a 97 z 122 /

bool is_prime(int n){
    for (int i = 2; i<=sqrt(n); i++){
        if (n%i == 0) return false;
    }
    return true;
}

string is_palindrome(string s){
    int i = 0, j = s.size()-1;
    for (i,j; i<s.size() && j>=0; i++,j--){
        if (s[i] != s[j]) return s;
    }
    return "Palindrome!";
}


void solve(){
    int l,r; cin >> l >> r;
    for (int i = l; i<=r; i++){
        cout << is_palindrome(to_string(i)) << nl;
    }
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
