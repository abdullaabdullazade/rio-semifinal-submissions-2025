#include <bits/stdc++.h>
#define int long long
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





signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }if(n==3){
            if(a[0]==1 && a[1]==2 && a[2]==3){
                cout << "Yes" << endl;
            }else if(a[0]==2 && a[1]==3 && a[2]==1){
                cout << "Yes" << endl;
            }else if(a[0]==3 && a[1]==1 && a[2]==2){
                cout << "Yes\n";
            }else if(a[0]==a[1] && a[1]==a[2]){
                cout << "Yes" << endl;
            }else if(a[0]==a[1]){
                cout << "Yes" << endl;
            }else if(a[0]==a[2] || a[1]==a[2]){
                cout << "Yes" << endl;
            }else {
                cout << "No" << endl;
            }
        }else {
            cout << "No" << endl;
        }
    }

    return 0;
}
