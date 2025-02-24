MOD = 10**9 + 7

def solve(test_cases):
    results = []
    
    for n, a, b in test_cases:
        # Qutuları və oyuncaqları sıralayırıq
        a.sort()
        b.sort()

        # Üsulları saymaq
        ways = 1
        j = 0  # b listində növbəti oyuncağı tapmaq üçün indeks
        
        for i in range(n):
            # a[i] qutusu üçün uyğun oyuncaqları tapırıq
            while j < n and b[j] <= a[i]:
                j += 1
            
            # j sayda uyğun oyuncağı seçə bilərik
            # Yalnız qalan oyuncaqları seçə bilərik
            ways *= j - i
            ways %= MOD
        
        results.append(ways)
    
    return results


# Test sayını alırıq
t = int(input())

test_cases = []

for _ in range(t):
    # hər test üçün n, a və b verilənləri alırıq
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    
    test_cases.append((n, a, b))

# Nəticələri hesablayırıq və çap edirik
results = solve(test_cases)
for result in results:
    print(result)
