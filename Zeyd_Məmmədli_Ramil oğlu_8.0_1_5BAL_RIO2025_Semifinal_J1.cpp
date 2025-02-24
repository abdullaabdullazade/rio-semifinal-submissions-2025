#include <bits/stdc++.h>
using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        char noqte;
        int saat, deqiqe, d;
        cin >> saat >> noqte >> deqiqe >> d;
        deqiqe = deqiqe + d;
        int qaliqdeq = deqiqe / 60;
        deqiqe %= 60;
        saat = saat + qaliqdeq;
        int w = saat % 24;
        if (w >= 0 && w < 10 && deqiqe >= 0 && deqiqe < 10) {
            cout << "0" << w << noqte << "0" << deqiqe << endl;
        }
        else {
            if (w >= 0 && w < 10) {
                cout << "0" << w << noqte << deqiqe << endl;
            }
            else if (deqiqe >= 0 && deqiqe < 10) {
                cout << w << noqte << "0" << deqiqe << endl;
            }
            else {
                cout << "0" << w << noqte << "0" << deqiqe << endl;
            }
        }
    }
}
