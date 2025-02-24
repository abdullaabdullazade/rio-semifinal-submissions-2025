#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

    using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--) {
        long long a, b, d;
        char c;
        cin >> a >> c >> b >> d;

        long long n = a * 60;

        long long sum = n + d + b;

        long long ans1 = sum / 60;
        long long ans2 = (1440 - (60 * ans1)) % 60 + ((b + d) % 60);
        string ans1copy = to_string(ans1);
        string ans2copy = to_string(ans2);

        // if (ans1 == 23) {
         //    ans1 = 00;
       // }

        string a1, a2;

        if (ans1 % 10 == 0) {
            a1 = '0' + ans1copy;
            cout << a1;
            cout << ":";
            cout << ans2copy << endl;
        }
        else if (ans2 / 10 == 0) {
            if (ans1 == 24) {
                ans1copy = "00";
            }
            cout << ans1copy;
            cout << ":";
            cout << '0' + ans2copy << endl;
        }
        else {

            cout << ans1 << ":" << ans2 << endl;
        }

    }

    return 0;
}