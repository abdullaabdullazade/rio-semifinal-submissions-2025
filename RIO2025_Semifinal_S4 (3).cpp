#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    // (skill, team_index) cütlüyü saxlanacaq
    vector<pair<long long,int>> all_skills;
    all_skills.reserve(n * k);

    for (int team = 0; team < n; team++) {
        for (int j = 0; j < k; j++) {
            long long skill;
            cin >> skill;
            all_skills.push_back({skill, team});
        }
    }

    // skill-ə görə sort
    sort(all_skills.begin(), all_skills.end(),
         [](auto &a, auto &b) {
             return a.first < b.first;
         });

    // Hər komandanın pəncərədə neçə nümayəndəsi var
    vector<int> freq(n, 0);
    int covered_count = 0;  // pəncərədə neçə komanda tam təmsil olunur

    int left = 0;
    long long ans = LLONG_MAX;  // ən kiçik (max-min) fərq

    // right-u sıfırdan sona qədər aparırıq
    for (int right = 0; right < (int)all_skills.size(); right++) {
        int teamID = all_skills[right].second;
        freq[teamID]++;
        // Əgər bu komandanın pəncərədə ilk nümayəndəsidirsə, covered_count artar
        if (freq[teamID] == 1) {
            covered_count++;
        }

        // Bütün komandalar pəncərədədirsə, pəncərəni mümkün qədər kiçilt
        while (covered_count == n && left <= right) {
            long long current_diff = all_skills[right].first - all_skills[left].first;
            ans = min(ans, current_diff);

            // Soldan çıxarmağa cəhd edirik
            int leftTeam = all_skills[left].second;
            freq[leftTeam]--;
            // Əgər bu komanda pəncərədə 0-a düşdüsə, daha bütün komandalar yoxdur
            if (freq[leftTeam] == 0) {
                covered_count--;
            }
            left++;
        }
    }

    cout << ans << "\n";
    return 0;
}
