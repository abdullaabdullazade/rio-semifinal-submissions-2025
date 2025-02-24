#include <iostream>
using namespace std;
  
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        // n massivin ölçüsüdür
        long long n;
        cin >> n;
        
        // Subtapşırıq şərti üzrə massiv ciddi azalandırdır, 
        // ona görə də hər cüt (i, j) üçün a[i] > a[j] (i < j)
        // Bu massivdə inversiya sayı maksimumdur:
        // inversions = n * (n - 1) / 2
        for (int i = 0; i < n; i++){
            long long x;
            cin >> x; // Massivin elementlərini sadəcə oxuyuruq.
        }
        
        long long inv = n * (n - 1) / 2;
        // Əgər inversiya sayı cütdürsə, əməliyyat vasitəsilə sortlamaq olar.
        if(inv % 2 == 0)
            cout << "Yes" << "\n";
        else
            cout << "No" << "\n";
    }
    return 0;
}
