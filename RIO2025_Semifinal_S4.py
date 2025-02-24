import sys

def min_skill_difference(n, k, teams):
    for team in teams:
        team.sort()
    
    indices = [0] * n
    
    candidates = [(teams[i][0], i, 0) for i in range(n)]
    candidates.sort()
    
    min_diff = sys.maxsize
    
    while True:
        min_val, min_team, min_index = candidates[0]
        max_val = candidates[-1][0]
        min_diff = min(min_diff, max_val - min_val)
        
        if indices[min_team] == k - 1:
            break
        
        indices[min_team] += 1
        new_value = teams[min_team][indices[min_team]]
        candidates[0] = (new_value, min_team, indices[min_team])
        candidates.sort()
    
    return min_diff

if __name__ == "__main__":
    n, k = map(int, input().split())
    teams = [list(map(int, input().split())) for _ in range(n)]
    print(min_skill_difference(n, k, teams))
