#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; i++){
        cin >> grid[i];
    }

    // Hər sətirdə 0 və 1-lərin sayını hesablayırıq.
    vector<int> rowCount0(n, 0), rowCount1(n, 0);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if(grid[i][j]=='0')
                rowCount0[i]++;
            else
                rowCount1[i]++;
        }
    }

    // Hər sütunda 0 və 1-lərin sayını hesablayırıq.
    vector<int> colCount0(m, 0), colCount1(m, 0);
    for (int j = 0; j < m; j++){
        for (int i = 0; i < n; i++){
            if(grid[i][j]=='0')
                colCount0[j]++;
            else
                colCount1[j]++;
        }
    }

    long long ans = 0;
    // Hər mümkün (sətir, sütun) kəsişməsi üçün yoxlayırıq.
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            bool validRow = false, validCol = false;
            int rowUniformVal = -1, colUniformVal = -1; // uniform dəyər 0 və ya 1 olacaq

            // Sətir üçün yoxlama (sütun j çıxarıldıqdan sonra)
            if(m == 1){
                // Sətirdə heç bir hüceyrə qalmır – avtomatik uniform
                validRow = true;
            } else {
                char cell = grid[i][j];
                // Əgər sətir tamamilə uniformdursa:
                if(rowCount0[i] == m){
                    validRow = true;
                    rowUniformVal = 0;
                } else if(rowCount1[i] == m){
                    validRow = true;
                    rowUniformVal = 1;
                } else {
                    // Əks halda, sətirdə dəqiq bir fərqli element var.
                    // Əgər çıxarılan hüceyrə fərqlidirsə, qalanlar uniform olur.
                    if(cell == '0'){
                        if(rowCount0[i] - 1 == 0){ // yəni, tək 0 var – çıxararsa, hamısı 1 qalır
                            validRow = true;
                            rowUniformVal = 1;
                        }
                    } else { // cell == '1'
                        if(rowCount1[i] - 1 == 0){
                            validRow = true;
                            rowUniformVal = 0;
                        }
                    }
                }
            }

            // Sütun üçün yoxlama (sətir i çıxarıldıqdan sonra)
            if(n == 1){
                validCol = true;
            } else {
                char cell = grid[i][j]; // çıxarılan hüceyrə
                if(colCount0[j] == n){
                    validCol = true;
                    colUniformVal = 0;
                } else if(colCount1[j] == n){
                    validCol = true;
                    colUniformVal = 1;
                } else {
                    if(cell == '0'){
                        if(colCount0[j] - 1 == 0){
                            validCol = true;
                            colUniformVal = 1;
                        }
                    } else {
                        if(colCount1[j] - 1 == 0){
                            validCol = true;
                            colUniformVal = 0;
                        }
                    }
                }
            }

            // Əgər həm sətir, həm sütun uniformdursa, və (əgər hər iki boş deyil) onların uniform dəyərləri eynidirsə, o zaman cross düzgündür.
            if(validRow && validCol){
                // Əgər sətirdə və ya sütunda əlavə hüceyrə yoxdursa, şərt avtomatik ödənilir.
                if(m == 1 || n == 1 || rowUniformVal == colUniformVal)
                    ans++;
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
