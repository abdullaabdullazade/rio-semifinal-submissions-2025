import heapq

def solve(n, k, skills):
    sorted_skills = [sorted(team) for team in skills]
    indices = [0] * n
    min_diff = float('inf')
    heap = []
    current_max = max(team[0] for team in sorted_skills)
    
    for i in range(n):
        heapq.heappush(heap, (sorted_skills[i][0], i))
    
    while True:
        current_min, team_idx = heapq.heappop(heap)
        min_diff = min(min_diff, current_max - current_min)
        
        indices[team_idx] += 1
        
        if indices[team_idx] == k:
            break
        
        next_skill = sorted_skills[team_idx][indices[team_idx]]
        heapq.heappush(heap, (next_skill, team_idx))
        current_max = max(current_max, next_skill)
    
    return min_diff

n, k = map(int, input().split())
skills = [list(map(int, input().split())) for _ in range(n)]

print(solve(n, k, skills))
