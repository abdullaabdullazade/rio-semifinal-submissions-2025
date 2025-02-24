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
        
        // n==1 i�in iki bo� olmayan k�me elde edilemez.
        if(n == 1){
            cout << -1 << "\n";
            continue;
        }
        
        // SetPlus: a[i] < a[i+1] (d�ng�sel, yani a[n-1] ile a[0]'da)
        // SetMinus: a[i] > a[i+1]
        // Ayn� olanlar (yani a[i]==a[i+1]) fark� 0 oldu�u i�in istedi�imiz k�meye eklenebilir;
        // fakat as�l toplam� de�i�tirmeyecektir.
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
        
        // E�er t�m farklar 0 ise (yani a dizisi sabitse):
        if(setPlus.empty() && setMinus.empty()){
            // Bo� olmayan proper bir alt k�me: �rne�in sadece ilk indeksi yazd�rmak yeterlidir.
            cout << 1 << "\n" << 1 << "\n";
            continue;
        }
        
        // a dizisi sabit de�ilse, setPlus ve setMinus toplamlar� e�it olacakt�r.
        // Ancak cevap olarak iki k�meden herhangi biri yeterlidir.
        // Fakat ikisinin de bo� olmamas� ve t�m indeksleri kapsamamas� gerekiyor.
        vector<int> ans;
        if(!setPlus.empty() && setPlus.size() < (size_t)n)
            ans = setPlus;
        else if(!setMinus.empty() && setMinus.size() < (size_t)n)
            ans = setMinus;
        
        // �stenen ��kt�: indeksler artan s�rayla
        sort(ans.begin(), ans.end());
        cout << ans.size() << "\n";
        for(auto idx : ans)
            cout << idx << " ";
        cout << "\n";
    }
    return 0;
}

