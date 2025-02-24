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
    int n;
    cin >> n;
    vector<int> temp(n);
    each(i,temp)cin >> i;
    if(n <= 2){
        say(1)
        return;
    }
    vector<int> sira;
    sira.push_back(temp[0]);
    int m = n;
    for(int i=1;i<n;++i){
        if(temp[i] != temp[i-1])sira.push_back(temp[i]);
        else m--;
    }
    n = m;
    if(n <= 2){
        say(1)
        return;
    }
    bool art = sira[1] > sira[0];
    //
    int cnt=1;
    for(int i=2;i<n;++i){
        if(sira[i] > sira[i-1]){
            if(art)continue;
            cnt++;
            if(i == n-1)break;
            art = sira[i+1] > sira[i];
            continue;
        }
        if(!art)continue;
        cnt++;
        if(i == n-1)break;
        art = sira[i+1] > sira[i];
    }
    say(cnt)

}

signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int t=1;
   cin >> t;
   while(t--){
    solve();
   }
}
