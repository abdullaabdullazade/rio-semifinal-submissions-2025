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

bool ezz(int a){
    vector<int> sira;
    while(a){
        sira.push_back(a % 10);
        a /= 10;
    }
    int l=0,r=sira.size()-1;
    while(l < r){
        if(sira[l] != sira[r]){
            return 0;
        }
        l++;
        r--;
    }
    return 1;
}

void solve(){
    int l,r;
    cin >> l >> r;
    for(int i=l;i<=r;++i){
        if(ezz(i))say("Palindrome!")
        else say(i)
    }

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
