#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
// Merge sort əsasında inversiya sayını hesablayan funksiya
long long mergeCount(vector<long long>& arr, int l, int r, vector<long long>& temp) {
    if(r - l <= 1) return 0;
    int m = (l + r) / 2;
    long long inv = mergeCount(arr, l, m, temp) + mergeCount(arr, m, r, temp);
    int i = l, j = m, k = l;
    while(i < m && j < r){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv += (m - i); // bütün qalan elementlər inversiyaya əlavə olunur
        }
    }
    while(i < m) temp[k++] = arr[i++];
    while(j < r) temp[k++] = arr[j++];
    for(int i = l; i < r; i++){
        arr[i] = temp[i];
    }
    return inv;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        // Əgər massivdə duplicate (eyni) element varsa,
        // cavab "Yes" olur, çünki bərabər ədədlər arasında inversiya pariteti istənilən kimi dəyişdirilə bilər.
        bool dup = false;
        {
            vector<long long> check = arr;
            sort(check.begin(), check.end());
            for(int i = 1; i < n; i++){
                if(check[i] == check[i-1]){
                    dup = true;
                    break;
                }
            }
        }
        if(dup){
            cout << "Yes\n";
            continue;
        }
        
        // İndi bütün elementlər fərdidir, inversiya sayı invariantdır.
        vector<long long> temp(n);
        vector<long long> copyArr = arr;
        long long inversions = mergeCount(copyArr, 0, n, temp);
        
        // Sortlanmış ardıcıllıqda inversiya sayı 0 (cüt) olur.
        // Əməliyyat yalnız cüt sayda yer dəyişdirmə (iki swap) etdiyi üçün,
        // inversiya sayı cüt olan massivları sortlamaq mümkündür.
        cout << (inversions % 2 == 0 ? "Yes" : "No") << "\n";
    }
    
    return 0;
}
