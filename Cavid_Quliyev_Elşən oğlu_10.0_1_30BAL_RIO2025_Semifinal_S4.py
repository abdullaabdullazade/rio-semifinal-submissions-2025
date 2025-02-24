import sys

def min_skill_difference(n, k, skills):
    # Hər komandadakı bacarıqları sıraya düzürük
    for i in range(n):
        skills[i].sort()
    
    # Seçilənlər üzərində iki göstərici ilə (pointers) iterasiya edəcəyik
    indices = [0] * n
    current_values = [skills[i][0] for i in range(n)]
    
    # İlk maksimum və minimum dəyərləri tapırıq
    min_diff = float('inf')
    
    while True:
        min_idx = min(range(n), key=lambda i: current_values[i])
        max_idx = max(range(n), key=lambda i: current_values[i])
        
        current_diff = current_values[max_idx] - current_values[min_idx]
        min_diff = min(min_diff, current_diff)
        
        # Əgər ən kiçik elementi artırmaq mümkün deyilsə, dayanırıq
        if indices[min_idx] == k - 1:
            break
        
        # Ən kiçik elementi irəli çəkirik
        indices[min_idx] += 1
        current_values[min_idx] = skills[min_idx][indices[min_idx]]
    
    return min_diff

if __name__ == "__main__":
    n, k = map(int, sys.stdin.readline().split())
    skills = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]
    print(min_skill_difference(n, k, skills))
