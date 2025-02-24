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

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int64_t t;
  cin >> t;

  while (t--) {
    int64_t n, invCnt = 0;
    cin >> n;

    vector<int64_t> arr(n);

    for (int64_t &el : arr) {
      cin >> el;
    }

    for (int64_t i = 0; i < n; i++) {
      for (int64_t j = 0; j < i; j++) {
        if (arr[j] == arr[i]) {
          cout << "Yes\n";
          goto next;
        }

        if (arr[j] > arr[i]) {
          invCnt++;
        }
      }
    }

    cout << (invCnt % 2 == 0 ? "Yes" : "No") << '\n';
  next:
    continue;
  }

  return 0;
}
