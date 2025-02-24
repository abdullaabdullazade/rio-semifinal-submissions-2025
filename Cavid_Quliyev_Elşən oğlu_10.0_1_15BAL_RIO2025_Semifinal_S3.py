import sys

def solve():
    t = int(sys.stdin.readline().strip())
    
    for _ in range(t):
        n = int(sys.stdin.readline().strip())
        a = list(map(int, sys.stdin.readline().split()))
        
        b = [abs(a[i] - a[(i + 1) % n]) for i in range(n)]
        total_sum = sum(b)
        
        if total_sum % 2 != 0:
            print(-1)
            continue
        
        target = total_sum // 2
        possible_sums = {0}
        selected_indices = {}
        
        for i in range(n):
            new_sums = set()
            for s in possible_sums:
                if s + b[i] <= target:
                    new_sums.add(s + b[i])
                    selected_indices[s + b[i]] = selected_indices.get(s, []) + [i + 1]
            possible_sums.update(new_sums)
            
            if target in possible_sums:
                print(len(selected_indices[target]))
                print(" ".join(map(str, selected_indices[target])))
                break
        else:
            print(-1)

if __name__ == "__main__":
    solve()
