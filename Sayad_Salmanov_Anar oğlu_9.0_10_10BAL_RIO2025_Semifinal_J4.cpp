#include <iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        long long a, b, c; 
        cin >> a >> b >> c;
        bool ok = false;
        // 0 əməliyyat: [a, b, c]
        if(a <= b && b <= c) ok = true;
        // 1 əməliyyat: [c, a, b]
        if(c <= a && a <= b) ok = true;
        // 2 əməliyyat: [b, c, a]
        if(b <= c && c <= a) ok = true;
        cout << (ok ? "Yes" : "No") << "\n";
    }
    return 0;
}
