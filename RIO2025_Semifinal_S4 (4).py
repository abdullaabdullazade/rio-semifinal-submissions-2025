import heapq

def min_skill_difference(n, k, teams):
    # Komandaların bacarıq səviyyələrini sıralayırıq
    for i in range(n):
        teams[i].sort()
    
    # İlk təxmin olaraq çox böyük bir fərq götürürük
    min_diff = float('inf')
    
    # Priyoritetli xətti istifadə edərək, minimal fərqi tapmağa çalışırıq
    heap = []
    max_skill = -float('inf')
    
    # Başlanğıc olaraq, hər komandadan ən kiçik bacarıq səviyyəsini seçirik
    for i in range(n):
        heapq.heappush(heap, (teams[i][0], i, 0))  # (bacarıq səviyyəsi, komanda nömrəsi, işçi nömrəsi)
        max_skill = max(max_skill, teams[i][0])
    
    # Bütün bacarıqlar çıxarılana qədər
    while True:
        # Ən kiçik bacarıq səviyyəsini götürürük
        min_skill, team_idx, member_idx = heap[0]
        
        # Fərqi hesablamaq
        min_diff = min(min_diff, max_skill - min_skill)
        
        # Komandanın növbəti üzvünü işə əlavə edirik
        if member_idx + 1 < k:
            next_skill = teams[team_idx][member_idx + 1]
            heapq.heappop(heap)
            heapq.heappush(heap, (next_skill, team_idx, member_idx + 1))
            max_skill = max(max_skill, next_skill)
        else:
            break
    
    return min_diff

# Giriş verilənləri
n, k = map(int, input().split())  # Komandaların sayı və hər komandadakı işçilərin sayı
teams = []

for i in range(n):
    skills = list(map(int, input().split()))
    teams.append(skills)

# Nəticəni çap edirik
result = min_skill_difference(n, k, teams)
print(result)
