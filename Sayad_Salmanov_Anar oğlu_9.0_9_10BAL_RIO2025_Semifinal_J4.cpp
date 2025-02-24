#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        // 10 ballıq subtapşırıqda n = 3 olmalıdır, 
        // amma əgər n fərqlidirsə, yalnız hazırki vəziyyəti yoxlayaq.
        if(n != 3){
            cout << (is_sorted(a.begin(), a.end()) ? "Yes" : "No") << "\n";
            continue;
        }
        
        bool canSort = false;
        // 0 əməliyyat: original massiv
        if(is_sorted(a.begin(), a.end()))
            canSort = true;
        
        // 1 əməliyyat: massiv [a[2], a[0], a[1]] şəklinə çevrilir
        vector<long long> op1 = {a[2], a[0], a[1]};
        if(is_sorted(op1.begin(), op1.end()))
            canSort = true;
        
        // 2 əməliyyat: massiv [a[1], a[2], a[0]] şəklinə çevrilir
        vector<long long> op2 = {a[1], a[2], a[0]};
        if(is_sorted(op2.begin(), op2.end()))
            canSort = true;
        
        cout << (canSort ? "Yes" : "No") << "\n";
    }
    return 0;
}
