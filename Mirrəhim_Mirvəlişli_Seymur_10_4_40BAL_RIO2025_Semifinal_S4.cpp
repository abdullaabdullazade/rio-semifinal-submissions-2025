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
    vector<vector<int>> sira(n,vector<int>(k));
    vector<int> temp;
    each(i,sira){
        each(j,i){
        cin >> j;
        temp.push_back(j);
        }
        sort(i.begin(),i.end());
    }
    sort(temp.begin(),temp.end());
    int mink = inf;
    for(int ind1=0;ind1<n*k;++ind1){
        int b = temp[ind1];
        int a =  b;
        bool oldu = 1;
        for(int i=0;i<n;++i){
            auto ind = lower_bound(sira[i].begin(),sira[i].end(),b);
            if(ind != sira[i].end() && *ind == b)continue;
            if(ind == sira[i].begin()){
                oldu = 0;
                break;
            }
            minn(a,*(--ind));
        }
        if(oldu)minn(mink,b - a);
    }
    say(mink)

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
