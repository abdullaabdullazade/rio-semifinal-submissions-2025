#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<vector<int>> teams(n, vector<int>(k));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> teams[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        sort(teams[i].begin(), teams[i].end());
    }

    vector<int> current_indexes(n, 0);
    
    int min_diff = INT_MAX;

    while (true) {
        int min_skill = INT_MAX;
        int max_skill = INT_MIN;

        for (int i = 0; i < n; i++) {
            int skill = teams[i][current_indexes[i]];
            min_skill = min(min_skill, skill);
            max_skill = max(max_skill, skill);
        }

        min_diff = min(min_diff, max_skill - min_skill);

        bool done = false;
        for (int i = 0; i < n; i++) {
            if (current_indexes[i] < k - 1) {
                current_indexes[i]++;
                done = true;
                break;
            } else {
                current_indexes[i] = 0;
            }
        }

        if (!done) break;
    }

    cout << min_diff << endl;

    return 0;
}
