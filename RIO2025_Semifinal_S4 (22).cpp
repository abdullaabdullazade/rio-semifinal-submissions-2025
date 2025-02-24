#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<vector<int>> teams(n, vector<int>(k));
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            cin >> teams[i][j];
        }
    }
    
    // Bütün bacarıq səviyyələrini (dəyər, komanda indeksi) şəklində massivə yığırıq.
    vector<pair<int, int>> all;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            all.push_back({teams[i][j], i});
        }
    }
    
    // Bacarıq səviyyələrinə görə sıralayırıq.
    sort(all.begin(), all.end());
    
    int total = all.size();
    vector<int> cnt(n, 0); // Hər komandanın neçə dəyəri pəncərədə olduğunu izləyirik.
    int count = 0; // Pəncərədə neçə müxtəlif komanda təmsil olunur.
    int left = 0;
    int ans = numeric_limits<int>::max();
    
    // Sağ göstərici ilə pəncərəni genişləndiririk.
    for (int right = 0; right < total; right++){
        int team = all[right].second;
        cnt[team]++;
        if(cnt[team] == 1)
            count++;
        
        // Əgər pəncərədə bütün komandalar varsa, aralığı daraldırıq.
        while(count == n){
            ans = min(ans, all[right].first - all[left].first);
            int leftTeam = all[left].second;
            cnt[leftTeam]--;
            if(cnt[leftTeam] == 0)
                count--;
            left++;
        }
    }
    
    cout << ans << "\n";
    return 0;
}
