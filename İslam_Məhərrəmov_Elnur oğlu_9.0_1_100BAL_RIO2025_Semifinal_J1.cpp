#include <bits/stdc++.h>
#define pb push_back
#define all(v) v.begin(), v.end()
#define F first
#define S second
using namespace std;
const int sz = 1e5+5;
const int inf = 1e9+7;
const long long infl = 1e18+1LL;


int sum(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n/=10;
    }return sum;
}


int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b){
    return (a*b)/gcd(a, b);
}

void solve(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    int a, b, c, d;
     a=int(s[0]-'0');
     b= int(s[1]-'0');
     c=int(s[3]-'0');
     d=int(s[4]-'0');
    a=(a*10)+b;
    c = (c*10)+d;
    if(c+n>59){
        a+=(c+n)/60;
        c=(c+n)%60;
    }else {
        c=(c+n);

    }if(a>23){
        a%=24;
    }if(a<10){
        cout << 0 <<a<<":";
    }else {
        cout << a << ":";
    }if(c<10){
        cout << 0 << c << endl;
    }else {
        cout << c << endl;
    }

}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
