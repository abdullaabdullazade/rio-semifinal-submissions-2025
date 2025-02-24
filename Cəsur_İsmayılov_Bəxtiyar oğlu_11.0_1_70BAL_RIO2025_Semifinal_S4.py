import heapq

def min_skill_difference(n, k, teams):
    for i in range(n):
        teams[i].sort()
    
    min_diff = float('inf')
    
    heap = []
    max_skill = -float('inf')
    for i in range(n):
        heapq.heappush(heap, (teams[i][0], i, 0))  
        max_skill = max(max_skill, teams[i][0])
    while True:
        min_skill, team_idx, member_idx = heap[0]
        
        min_diff = min(min_diff, max_skill - min_skill)
        
        if member_idx + 1 < k:
            next_skill = teams[team_idx][member_idx + 1]
            heapq.heappop(heap)
            heapq.heappush(heap, (next_skill, team_idx, member_idx + 1))
            max_skill = max(max_skill, next_skill)
        else:
            break
    
    return min_diff

n, k = map(int, input().split())  
teams = []

for i in range(n):
    skills = list(map(int, input().split()))
    teams.append(skills)

result = min_skill_difference(n, k, teams)
print(result)
