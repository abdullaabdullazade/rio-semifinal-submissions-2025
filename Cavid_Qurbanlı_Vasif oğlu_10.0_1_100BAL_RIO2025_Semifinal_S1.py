import heapq

def min_skill_difference(n, k, teams):
    # Hər komandanın bacarıq səviyyələrini sıralayırıq
    for i in range(n):
        teams[i].sort()

    # Prioritet xətti ilə ən kiçik fərqi tapmağa çalışırıq
    heap = []
    current_max = float('-inf')

    # Başlangıç olaraq hər komandanın ilk üzvünü əlavə edirik
    for i in range(n):
        heapq.heappush(heap, (teams[i][0], i, 0))  # (bacarıq səviyyəsi, komanda indeksi, üzv indeksi)
        current_max = max(current_max, teams[i][0])

    min_diff = float('inf')
    
    while True:
        current_min, team_idx, member_idx = heapq.heappop(heap)
        # Hesablayırıq: ən böyük - ən kiçik
        min_diff = min(min_diff, current_max - current_min)

        # Növbəti üzvü əlavə edirik
        if member_idx + 1 < k:
            next_skill = teams[team_idx][member_idx + 1]
            heapq.heappush(heap, (next_skill, team_idx, member_idx + 1))
            current_max = max(current_max, next_skill)
        else:
            break  # Hər komandadan bir üzv seçildikdə proses bitir

    return min_diff

# Giriş verilənləri
n, k = map(int, input().split())
teams = [list(map(int, input().split())) for _ in range(n)]

# Nəticə
print(min_skill_difference(n, k, teams))
