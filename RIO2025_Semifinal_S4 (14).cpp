#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct Node {
    int val, team, idx;
};

struct cmp {
    bool operator()(const Node &a, const Node &b) {
        return a.val > b.val; // min-heap: smallest value on top
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int teams, members;
    cin >> teams >> members; // teams = number of teams, members = number of employees per team
    vector<vector<int>> skill(teams, vector<int>(members));

    // Read and sort each team's skills
    for (int i = 0; i < teams; i++){
        for (int j = 0; j < members; j++){
            cin >> skill[i][j];
        }
        sort(skill[i].begin(), skill[i].end());
    }

    // Initialize min-heap and current maximum value
    priority_queue<Node, vector<Node>, cmp> minHeap;
    int currentMax = 0;
    for (int i = 0; i < teams; i++){
        minHeap.push({skill[i][0], i, 0});
        currentMax = max(currentMax, skill[i][0]);
    }

    int ans = 1e9; // or use a sufficiently large number
    while (true) {
        Node cur = minHeap.top();
        minHeap.pop();

        // Update answer: current range is currentMax - current minimum
        ans = min(ans, currentMax - cur.val);

        // If this team has no more members to offer, we cannot improve the range
        if (cur.idx + 1 == members)
            break;

        // Push the next element from the same team
        cur.idx++;
        cur.val = skill[cur.team][cur.idx];
        currentMax = max(currentMax, cur.val);
        minHeap.push(cur);
    }

    cout << ans << "\n";
    return 0;
}
