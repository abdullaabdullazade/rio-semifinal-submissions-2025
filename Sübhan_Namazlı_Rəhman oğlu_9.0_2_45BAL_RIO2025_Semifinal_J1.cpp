//azxantrop

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
//define int long long

signed main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    int ss, dd, d;
    char c;
    while(t--){
        cin >> ss;
        cin >> c;
        cin >> dd;
        cin >> d;

        int saat = d/60;
        int deq = d%60;

        ss+=saat;
        dd+=deq;

        if(dd>60){
            dd-=60;
            ss++;
        }
        if(ss>23) ss-= (ss/24)*24;
        if(ss<10){
            cout << 0 << ss;
        }
        else{
            cout << ss;
        }

        cout << ":";

        if(dd<10){
            cout << 0 << dd;
        }
        else{
            cout << dd;
        }
        cout << "\n";
    }
    return 0;
}
