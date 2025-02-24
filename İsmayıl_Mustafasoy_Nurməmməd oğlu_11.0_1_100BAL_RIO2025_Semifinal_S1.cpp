#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;
#define int long long
#define all(v) v.begin(), v.end()
#define fi(l,r) for(int i = l; i <= r; i++)
void solve(string s){
	for(int j = 0; j < s.size() / 2; j++){
		if(s[j] != s[s.size() - 1 - j]){
			cout << s;
			return;
		}
	}
	cout << "Palindrome!";
}
signed main(){
	int l,r; cin >> l >> r;
	fi(l,r){
		string s = to_string(i);
		solve(s);
		cout << '\n';
	}
}
