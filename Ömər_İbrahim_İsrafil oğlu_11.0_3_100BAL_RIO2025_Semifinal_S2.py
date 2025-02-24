import sys
input = sys.stdin.read().split()
ptr = 0
t = int(input[ptr])
ptr += 1
for _ in range(t):
    n = int(input[ptr])
    ptr += 1
    a = list(map(int, input[ptr:ptr + n]))
    ptr += n
    s = sorted(a)
    d = {v: i for i, v in enumerate(s)}
    p = [d[x] for x in a]
    cnt = 0
    i = 0
    while i < n:
        if i == n - 1:
            cnt += 1
            i += 1
            continue
        cur = p[i]
        nxt = p[i + 1]
        diff = nxt - cur
        if diff not in (1, -1):
            cnt += 1
            i += 1
            continue
        j = i + 1
        exp = nxt + diff
        while j + 1 < n and p[j + 1] == exp:
            j += 1
            exp += diff
        cnt += 1
        i = j + 1
    print(cnt)
