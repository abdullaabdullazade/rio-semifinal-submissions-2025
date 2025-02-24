MOD = 10**9 + 7

def count_ways(n, a, b):
    a.sort()
    b.sort()
    ways = 1
    j = 0
    for i in range(n):
        while j < n and a[i] >= b[j]:
            j += 1
        ways = (ways * (j - i)) % MOD
    return ways

def main():
    t = int(input().strip())
    results = []
    for _ in range(t):
        n = int(input().strip())
        a = list(map(int, input().strip().split()))
        b = list(map(int, input().strip().split()))
        result = count_ways(n, a, b)
        results.append(result)
    for res in results:
        print(res)

if __name__ == "__main__":
    main()