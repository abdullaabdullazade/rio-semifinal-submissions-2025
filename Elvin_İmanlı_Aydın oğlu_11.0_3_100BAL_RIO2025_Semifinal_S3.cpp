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
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        // n==1 için iki boþ olmayan küme elde edilemez.
        if(n == 1){
            cout << -1 << "\n";
            continue;
        }
        
        // SetPlus: a[i] < a[i+1] (döngüsel, yani a[n-1] ile a[0]'da)
        // SetMinus: a[i] > a[i+1]
        // Ayný olanlar (yani a[i]==a[i+1]) farký 0 olduðu için istediðimiz kümeye eklenebilir;
        // fakat asýl toplamý deðiþtirmeyecektir.
        vector<int> setPlus, setMinus, zeros;
        for (int i = 0; i < n; i++){
            int nxt = (i + 1) % n;
            if(a[i] < a[nxt])
                setPlus.push_back(i + 1); // 1-indexed
            else if(a[i] > a[nxt])
                setMinus.push_back(i + 1);
            else
                zeros.push_back(i + 1);
        }
        
        // Eðer tüm farklar 0 ise (yani a dizisi sabitse):
        if(setPlus.empty() && setMinus.empty()){
            // Boþ olmayan proper bir alt küme: örneðin sadece ilk indeksi yazdýrmak yeterlidir.
            cout << 1 << "\n" << 1 << "\n";
            continue;
        }
        
        // a dizisi sabit deðilse, setPlus ve setMinus toplamlarý eþit olacaktýr.
        // Ancak cevap olarak iki kümeden herhangi biri yeterlidir.
        // Fakat ikisinin de boþ olmamasý ve tüm indeksleri kapsamamasý gerekiyor.
        vector<int> ans;
        if(!setPlus.empty() && setPlus.size() < (size_t)n)
            ans = setPlus;
        else if(!setMinus.empty() && setMinus.size() < (size_t)n)
            ans = setMinus;
        
        // Ýstenen çýktý: indeksler artan sýrayla
        sort(ans.begin(), ans.end());
        cout << ans.size() << "\n";
        for(auto idx : ans)
            cout << idx << " ";
        cout << "\n";
    }
    return 0;
}

