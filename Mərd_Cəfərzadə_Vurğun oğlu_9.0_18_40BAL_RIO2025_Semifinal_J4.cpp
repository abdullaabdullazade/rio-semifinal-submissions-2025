#if defined(__GNUC__) && !defined(__clang__)
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("fast-math")
#pragma GCC optimize("no-stack-protector")
#endif

#include <bits/extc++.h>
#include <bits/stdc++.h>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#ifdef ONLINE_JUDGE
#define debug(...) ;
#define debugSeperator(...) ;
#define startTimer() ;
#define getTime() 0
#else

void debugSeperator(size_t len = 20, char c = '=') {
  for (size_t i = 0; i < len; i++) {
    cout << c;
  }
  cout << '\n';
}

void debugUtil() {}

template <typename T, typename... Args>
void debugUtil(T &&first, Args &&...args) {
  cout << first << ' ';
  debugUtil(std::forward<Args>(args)...);
}

template <typename T, typename... Args> void debug(T &&first, Args &&...args) {
  cout << "[DEBUG]: ";
  debugUtil(first, args...);
  cout << '\n';
}

clock_t timer;

void startTimer() { timer = clock(); }

double getTime() { return (double)(clock() - timer) / CLOCKS_PER_SEC; }

#endif

template <typename type> class fenwickTree {
public:
  fenwickTree(int size) {
    n = size;
    T.assign(n, type{});
  }

  fenwickTree(const std::vector<type> &arr) : fenwickTree(arr.size()) {
    for (int i = 0; i < (int)arr.size(); i++) {
      T[i] += arr[i];

      int next = g(i);
      if (next < n) {
        T[next] += T[i];
      }
    }
  }

  type query(int l, int r) const { return sum(r) - sum(l - 1); }

  void update(int idx, type val) {
    while (idx < n && idx >= 0) {
      T[idx] += val;
      idx = g(idx);
    }
  }

private:
  std::vector<type> T;
  int n;

  static int f(int n) { return n & (n + 1); }
  static int g(int n) { return n | (n + 1); }

  type sum(int r) const {
    type ans = 0;

    while (r >= 0) {
      ans += T[r];
      r = f(r) - 1;
    }

    return ans;
  }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int64_t t;
  cin >> t;

  while (t--) {
    int64_t n, invCnt = 0;
    cin >> n;

    fenwickTree<int64_t> fenwick(n + 1);
    vector<int64_t> arr(n);

    for (int64_t &el : arr) {
      cin >> el;
    }

    for (int64_t i = 0; i < n; i++) {
      if (fenwick.query(arr[i], arr[i]) > 0) {
        cout << "Yes\n";
        goto next;
      }

      invCnt += fenwick.query(arr[i] + 1, n);
      fenwick.update(arr[i], 1); 
    }

    cout << (invCnt % 2 == 0 ? "Yes" : "No") << '\n';
  next:
    continue;
  }

  return 0;
}
