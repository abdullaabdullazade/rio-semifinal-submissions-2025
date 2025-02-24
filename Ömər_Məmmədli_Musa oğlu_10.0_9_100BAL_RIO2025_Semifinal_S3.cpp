#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;                 // testlərin sayı
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n), d(n), b(n);
        long long S = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        
        // d[i] = a[i+1] - a[i],  b[i] = |d[i]|,  S = sum of b[i]
        for(int i=0; i<n; i++){
            if(i < n-1) d[i] = a[i+1] - a[i];
            else        d[i] = a[0]   - a[n-1];  // i = n-1 üçün
            
            b[i] = llabs(d[i]);
            S += b[i];
        }
        
        // S təkdirsə, ayırmaq mümkün deyil
        if(S % 2 == 1){
            cout << -1 << "\n";
            continue;
        }
        
        // d[i] > 0 və ya =0 olan indekslər A-ya, d[i] < 0 olan B-yə
        vector<int> A, B;
        A.reserve(n);
        B.reserve(n);
        for(int i=0; i<n; i++){
            if(d[i] > 0){
                A.push_back(i+1);  // +1, çünki indekslər 1-dən başlayır
            }
            else if(d[i] < 0){
                B.push_back(i+1);
            }
            else{
                // d[i] = 0 halları istənilən tərəfə ata bilərik; A-ya qoyuruq
                A.push_back(i+1);
            }
        }
        
        // Hər iki çoxluq boş olmamalıdır.
        // Əgər A boşdursa, deməli bütün d[i] <= 0, həm də cəmləri 0 => hamısı sıfırdır.
        // Bütün elementlər B-dədir. Bir elementi A-ya keçirmək kifayətdir.
        if(A.empty()){
            A.push_back(B.back());
            B.pop_back();
        }
        // Eyni məntiqlə B boşdursa
        if(B.empty()){
            B.push_back(A.back());
            A.pop_back();
        }
        
        // İndi A və B boş deyil.
        // Çıxış formatına uyğun: əvvəl A-nın ölçüsü, sonra A-nın elementləri
        cout << (int)A.size() << "\n";
        for(int i=0; i<(int)A.size(); i++){
            cout << A[i] << (i+1<(int)A.size() ? ' ' : '\n');
        }
    }
    return 0;
}
