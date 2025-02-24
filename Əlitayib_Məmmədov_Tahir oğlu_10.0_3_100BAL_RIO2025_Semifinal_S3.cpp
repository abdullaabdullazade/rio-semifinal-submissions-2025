#include <iostream>
#include <vector>
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
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        // n == 1 halında iki qeyri-boş çoxluq yaratmaq mümkün deyil.
        if(n == 1){
            cout << -1 << "\n";
            continue;
        }
        
        // Əgər bütün a elementləri eynidirsə, b ardıcıllığının bütün elementləri 0 olar.
        // Belə halda istənilən qeyri-boş bölmə doğrudur.
        bool allEqual = true;
        for(int i = 1; i < n; i++){
            if(a[i] != a[0]){
                allEqual = false;
                break;
            }
        }
        if(allEqual){
            cout << 1 << "\n" << 1 << "\n";
            continue;
        }
        
        // d[i] = a[i+1] - a[i] (i=0,...,n-2), d[n-1] = a[0] - a[n-1]
        // b[i] = |d[i]|
        // Qeyd: Cəmin sıfır olması səbəbindən 
        // sum(d[i] > 0) = - sum(d[i] < 0) olur.
        // Ona görə də d[i] > 0 olan indekslərdən ibarət çoxluq seçmək doğrudur.
        vector<int> indices;
        for(int i = 0; i < n; i++){
            long long diff = a[(i+1) % n] - a[i];
            if(diff > 0)
                indices.push_back(i + 1); // 1-indexed
        }
        
        // Əgər seçilmiş çoxluq boşdursa, bölmə mümkün deyil
        // (əks halda d[i] > 0 olanlar ən azı bir element olmalıdır).
        if(indices.empty()){
            cout << -1 << "\n";
        }
        else{
            cout << indices.size() << "\n";
            for(auto idx : indices)
                cout << idx << " ";
            cout << "\n";
        }
    }
    
    return 0;
}
