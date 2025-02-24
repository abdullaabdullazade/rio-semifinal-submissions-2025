def find_min_difference(n, k, skills):
    from itertools import product

    # Hər komandanın üzvlərini bacarıq səviyyəsinə görə sıraya qoyuruq
    sorted_teams = [sorted(team) for team in skills]

    # Minimum fərqi tapmaq üçün dəyişənlər
    min_difference = float('inf')

    # Bütün mümkün seçimlərin kombinasiyalarını yoxlayırıq
    for members in product(*sorted_teams):
        difference = max(members) - min(members)
        if difference < min_difference:
            min_difference = difference

    return min_difference

# Giriş verilənləri oxuyuruq
n, k = map(int, input().split())
skills = []

for _ in range(n):
    team_skills = list(map(int, input().split()))
    skills.append(team_skills)

# Çıxış verilənləri
print(find_min_difference(n, k, skills))
