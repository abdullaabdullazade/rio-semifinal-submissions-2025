#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct Node {
    int value;    // cari bacarıq səviyyəsi
    int team;     // aid olduğu komanda
    int index;    // komandadakı mövqeyi (indeks)
    
    // min-heap üçün müqayisə
    bool operator>(const Node &other) const {
        return value > other.value;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<vector<int>> teams(n, vector<int>(k));
    
    // Hər komandadakı bacarıq səviyyələrini oxuyub sıralayırıq.
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            cin >> teams[i][j];
        }
        sort(teams[i].begin(), teams[i].end());
    }
    
    // Min-heap: hazırki seçilmiş elementlər arasından ən kiçiyini tapmaq üçün
    priority_queue<Node, vector<Node>, greater<Node>> minHeap;
    int currentMax = 0;
    
    // Hər komandadan ən kiçik elementi seçirik və currentMax-i yeniləyirik.
    for (int i = 0; i < n; i++){
        int val = teams[i][0];
        minHeap.push({val, i, 0});
        currentMax = max(currentMax, val);
    }
    
    int ans = currentMax - minHeap.top().value;
    
    // Heap boşalana və ya hər hansı komandada daha irəliyə keçmək mümkün olmayana qədər davam edirik.
    while (true) {
        Node node = minHeap.top();
        minHeap.pop();
        
        int team = node.team;
        int idx = node.index;
        
        // Əgər həmin komandada daha irəli element yoxdursa, dayandırırıq.
        if (idx + 1 >= k)
            break;
        
        int nextVal = teams[team][idx + 1];
        minHeap.push({nextVal, team, idx + 1});
        currentMax = max(currentMax, nextVal);
        
        // Cari aralıq: currentMax - heap-dakı ən kiçik elementin dəyəri.
        ans = min(ans, currentMax - minHeap.top().value);
    }
    
    cout << ans << "\n";
    return 0;
}
