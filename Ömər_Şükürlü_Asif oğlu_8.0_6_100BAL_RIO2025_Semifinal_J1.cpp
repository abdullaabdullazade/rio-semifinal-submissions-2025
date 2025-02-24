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
    t = int(input())  # Число тестов
    results = []
    for _ in range(t):
        n = int(input())  
        a = list(map(int, input().split()))  
        b = list(map(int, input().split()))  

        result = count_ways(n, a, b)
        results.append(result)

    for res in results:
        print(res)

if __name__ == "__main__":
    main()