#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tt;
    cin >> tt;
    while(tt--){
        string s;
        cin >> s;
        int n;
        cin >> n;
        n %= 1440;
        while(n--)
        {
            if(s[4] != '9'){
                s[4]++;
            }
            else{
                s[3]++;
                s[4] = '0';
            }
            if(s[3] == '6' && s[4] == '0'){
                if(s[1] != '9'){
                    s[1]++;
                }
                else{
                    s[0]++;
                    s[1] = '0';
                }
                s[3] = s[4] = '0';
            }
            if(s[0] == '2' && s[1] == '4'){
                s[0] = s[1] = '0';
            }
        }
        cout << s << endl;
    }
}
