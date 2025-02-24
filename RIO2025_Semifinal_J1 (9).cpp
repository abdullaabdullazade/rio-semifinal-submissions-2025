#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int a, n, d;
        char m;
        cin >> a >> m >> n >> d;
        int vaxt = a*60+n;
        vaxt = vaxt + d;
        if(vaxt/60%24 < 10 && vaxt % 60 < 10){
            if (a == 23 && d >= 60-n && d <= 60){
                cout << "00" << ":" << "0" << vaxt%60<< endl;
            }
            else{

                cout << "0" << vaxt/60%24 << ":" << "0" << vaxt%60<< endl;
            }
        }
        else if (vaxt/60%24 <= 10 && vaxt % 60 < 10){
            cout << vaxt/60%24 << ":" << "0" << vaxt%60<< endl;
        }
        else if (vaxt/60%24 > 10 && vaxt % 60 < 10){
            cout << vaxt/60%24 << ":" << "0" << vaxt%60<< endl;
        }
        else{
            if (a == 23 && d >= 60-n){
                cout << "0" << vaxt/60%24 << ":" << vaxt%60<< endl;
            }
            else{
                cout << "0" << vaxt/60%24 << ":" << vaxt%60<< endl;
            }
        }
    }
}
