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

typedef char boolean;
typedef __int128 int128_t;
typedef __uint128_t uint128_t;

/*
int128_t gcd(int128_t a, int128_t b) {
  if (b > a) {
    swap(a, b);
  }

  while (b) {
    a %= b;
    swap(a, b);
  }

  return a;
}
int128_t lcm(int128_t a, int128_t b) { return a * b / gcd(a, b); }
int128_t abs(int128_t n) { return (n < 0 ? -n : n); }
istream &operator>>(istream &in, int128_t &n) {
  n = 0;
  string s;
  in >> s;

  boolean isNegative = (s.front() == '-');
  for (size_t i = (isNegative ? 1 : 0); i < s.size(); i++) {
    n *= 10;
    n += s[i] - '0';
  }

  if (isNegative) {
    n = -n;
  }

  return in;
}
ostream &operator<<(ostream &out, int128_t n) {
  if (n == 0) {
    return out << 0;
  }

  string str;
  boolean isNegative = (n < 0);

  n = abs(n);

  while (n) {
    str.push_back((n % 10) + '0');
    n /= 10;
  }

  reverse(str.begin(), str.end());

  if (isNegative) {
    out << '-';
  }

  return out << str;
}
uint128_t gcd(uint128_t a, uint128_t b) {
  if (b > a) {
    swap(a, b);
  }

  while (b) {
    a %= b;
    swap(a, b);
  }

  return a;
}
uint128_t lcm(uint128_t a, uint128_t b) { return a * b / gcd(a, b); }
istream &operator>>(istream &in, uint128_t &n) {
  n = 0;
  string s;
  in >> s;

  for (size_t i = 0; i < s.size(); i++) {
    n *= 10;
    n += s[i] - '0';
  }

  return in;
}
ostream &operator<<(ostream &out, uint128_t n) {
  if (n == 0) {
    return out << 0;
  }

  string str;

  while (n) {
    str.push_back((n % 10) + '0');
    n /= 10;
  }

  reverse(str.begin(), str.end());
  return out << str;
}
*/

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

  int64_t l, r;
  cin >> l >> r;

  for (int64_t i = l; i <= r; i++) {
    string str = to_string(i);
    string firstHalf = str.substr(0, str.size() / 2 + (str.size() % 2));
    string secondHalf = str.substr(str.size() / 2);
    reverse(secondHalf.begin(), secondHalf.end());

    if (firstHalf == secondHalf) {
      cout << "Palindrome!\n";
    } else {
      cout << i << '\n';
    }
  }

  return 0;
}