#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl << '\n'
#define bs << ' '
#define bss bs <<
#define each(i,a) for(auto &i : a)
#define say(x) cout << x endl;
const int inf = 1e9;
const int inff = 1e17;

void maxx(int &a,int b){
    a = max(a,b);
}
void minn(int &a,int b){
    a = min(a,b);
}

int cel(int a,int b){
    return (a + b - 1) / b;
}


void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> a(k),b(k);
    int mx = inf;
    each(i,a)cin >> i;
    each(i,b)cin >> i;
    each(i,a){
        each(j,b){
            minn(mx,abs(i-j));
        }
    }
    say(mx)

}

signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int t=1;
//   cin >> t;
   while(t--){
    solve();
   }
}
