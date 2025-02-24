#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int min_skill_difference(int n, int k, vector<vector<int>>& skills) {
    // Hər komandadakı bacarıqları sıraya düzürük
    for (int i = 0; i < n; i++) {
        sort(skills[i].begin(), skills[i].end());
    }
    
    // Seçilənlər üzərində iki göstərici ilə (pointers) iterasiya edəcəyik
    vector<int> indices(n, 0);
    vector<int> current_values(n);
    for (int i = 0; i < n; i++) {
        current_values[i] = skills[i][0];
    }
    
    int min_diff = numeric_limits<int>::max();
    
    while (true) {
        // Minimum və maksimum dəyərləri tapırıq
        int min_idx = min_element(current_values.begin(), current_values.end()) - current_values.begin();
        int max_idx = max_element(current_values.begin(), current_values.end()) - current_values.begin();
        
        int current_diff = current_values[max_idx] - current_values[min_idx];
        min_diff = min(min_diff, current_diff);
        
        // Əgər ən kiçik elementi artırmaq mümkün deyilsə, dayanırıq
        if (indices[min_idx] == k - 1) {
            break;
        }
        
        // Ən kiçik elementi irəli çəkirik
        indices[min_idx]++;
        current_values[min_idx] = skills[min_idx][indices[min_idx]];
    }
    
    return min_diff;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> skills(n, vector<int>(k));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> skills[i][j];
        }
    }
    
    cout << min_skill_difference(n, k, skills) << endl;
    
    return 0;
}
