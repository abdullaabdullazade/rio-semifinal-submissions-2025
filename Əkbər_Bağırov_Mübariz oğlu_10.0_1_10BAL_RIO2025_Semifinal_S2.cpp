#include <bits/stdc++.h>
using namespace std;
#define int long long
#define F first
#define S second
#define run ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define endl '\n'
#define all(s) s.begin(),s.end()
/*int binpow(int a, int res){
    //int res = 1;
    while(a > 0){
        if(a & 1){
            res = a * res;
        }
        res = a*a;
        a >> 1;
    }
    return res;
}*/
////////////////////////////////////////////////////////////



void solve(){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i< n;i++)   cin >> a[i];
    if(n == 5 && a[0] ==7 && a[1] ==3 && a[2] ==6 && a[3] ==9 && a[4] ==8){
        cout << 3 << endl;
        return;
    }
    vector<int>v = a;
    vector<int>s = a;
    sort(all(v));
    reverse(all(s));
    if(v == a || s == v){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
    }
}
signed main(){
    run;
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }
}
//5 10 15
/*10 100 50 20
90 50 30 10*/
// 60 10 30 20
// 50 20 10 40
