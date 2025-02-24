#include <bits/stdc++.h>
using namespace std;
void dfs(vector<int> a, vector<int> b, vector<int> used, int pos, int &cnt) {
	int n = a.size();
	for(int j = 0; j < n; j++) {
		if(a[pos] >= b[j] && !used[j]) {
			if(pos == n - 1) {
				cnt++;
			}
			used[j]++;
			dfs(a, b, used, pos + 1, cnt);
			used[j]--;
		}
	}
	
}
int main() {
	int t;
	cin >> t;
	for(int T = 0; T < t; T++) {
		int n;
		cin >> n;
		vector<int> a(n), b(n), used(n, 0);
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) cin >> b[i];
		int cnt = 0;
		dfs(a, b, used, 0, cnt);
		cout << cnt << endl;
	}
	return 0;
}
