import heapq

def find_minimum_skill_diff(n, k, skills):
    for i in range(n):
        skills[i].sort()

    heap = []
    current_max = -float('inf')
    
    for i in range(n):
        heapq.heappush(heap, (skills[i][0], i, 0))
        current_max = max(current_max, skills[i][0])

    min_diff = float('inf')
    
    while True:
        current_min, team_idx, skill_idx = heapq.heappop(heap)
        min_diff = min(min_diff, current_max - current_min)
        
        if skill_idx + 1 < k:
            next_skill = skills[team_idx][skill_idx + 1]
            heapq.heappush(heap, (next_skill, team_idx, skill_idx + 1))
            current_max = max(current_max, next_skill)
        else:
            break
    
    return min_diff

n, k = map(int, input().split())
skills = [list(map(int, input().split())) for _ in range(n)]

print(find_minimum_skill_diff(n, k, skills))
