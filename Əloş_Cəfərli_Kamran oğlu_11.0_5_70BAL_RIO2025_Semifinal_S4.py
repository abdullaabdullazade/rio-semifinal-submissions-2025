import heapq

def solve(n, k, skills):
    for i in range(n):
        skills[i].sort()
    
    heap = []
    current_max = max(skill[0] for skill in skills)
    
    for i in range(n):
        heapq.heappush(heap, (skills[i][0], i, 0))
    
    min_diff = float('inf')
    
    while True:
        current_min, team, index = heapq.heappop(heap)
        min_diff = min(min_diff, current_max - current_min)
        
        if index + 1 < k:
            next_skill = skills[team][index + 1]
            heapq.heappush(heap, (next_skill, team, index + 1))
            current_max = max(current_max, next_skill)
        else:
            break
    
    return min_diff

n, k = map(int, input().split())
skills = [list(map(int, input().split())) for _ in range(n)]

result = solve(n, k, skills)
print(result)
