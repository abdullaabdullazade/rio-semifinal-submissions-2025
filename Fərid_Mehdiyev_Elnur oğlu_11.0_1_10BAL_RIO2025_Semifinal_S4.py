import math




n = input(" ").split() ; ans = []
x = []
for i in range(0, int(n[0])):
    k = list(map(int, input().split(" ")))
    x.append(k)
for j in range(0, len(x[0])):
    for i in range(0, len(x[0])):
        ehe = math.fabs(x[0][j] - x[1][i])
        ans.append(ehe)
print(int(min(ans)))

