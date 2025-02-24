#include <bits/stdc++.h>
using namespace std;

int getPrefixSum(const vector<vector<int>> &prefix, int x1, int y1, int x2,
                 int y2) {
  return prefix[x2][y2] - (x1 != 0 ? prefix[x1 - 1][y2] : 0) -
         (y1 != 0 ? prefix[x2][y1 - 1] : 0) +
         (x1 != 0 && y1 != 0 ? prefix[x1 - 1][y1 - 1] : 0);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, ans = 0;
  cin >> n >> m;

  vector<vector<char>> grid(n, vector<char>(m));
  vector<vector<int>> prefix(n, vector<int>(m, 0));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> grid[i][j];

      prefix[i][j] = (i != 0 ? prefix[i - 1][j] : 0) +
                     (j != 0 ? prefix[i][j - 1] : 0) -
                     (i != 0 && j != 0 ? prefix[i - 1][j - 1] : 0) +
                     (grid[i][j] == '1' ? 1 : 0);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      // center of the street is {i, j}
      // check sums of all houses other than the center

      int prefixSum = getPrefixSum(prefix, i, 0, i, j) +
                      getPrefixSum(prefix, i, j, i, m - 1) +
                      getPrefixSum(prefix, 0, j, i, j) +
                      getPrefixSum(prefix, i, j, n - 1, j) -
                      4 * (grid[i][j] == '1' ? 1 : 0);

      if (prefixSum == 0 || prefixSum == (i + j + m - 1 - j + n - 1 - i)) {
        ans++;
      }
    }
  }

  cout << ans << '\n';
  return 0;
}