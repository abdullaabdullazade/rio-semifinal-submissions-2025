import sys
import heapq

def min_skill_difference(n, k, teams):
    for team in teams:
        team.sort()
    
    min_diff = sys.maxsize
    heap = [(teams[i][0], i, 0) for i in range(n)]
    heapq.heapify(heap)
    
    max_val = max(teams[i][0] for i in range(n))
    
    while True:
        min_val, min_team, min_index = heapq.heappop(heap)
        min_diff = min(min_diff, max_val - min_val)
        
        if min_index + 1 == k:
            break
        
        new_value = teams[min_team][min_index + 1]
        max_val = max(max_val, new_value)
        heapq.heappush(heap, (new_value, min_team, min_index + 1))
    
    return min_diff

if __name__ == "__main__":
    n, k = map(int, input().split())
    teams = [list(map(int, input().split())) for _ in range(n)]
    print(min_skill_difference(n, k, teams))
