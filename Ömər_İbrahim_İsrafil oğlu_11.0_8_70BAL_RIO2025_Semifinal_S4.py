import sys
def OMAR():
    data = map(int, sys.stdin.buffer.read().split())
    try:
        n = next(data)
        k = next(data)
    except StopIteration:
        return
    tot = n * k
    arr = [None] * tot
    for i in range(tot):
        arr[i] = (next(data), i // k)
    arr.sort(key=lambda x: x[0])
    cnt = [0] * n
    have = 0
    ans = 10**10
    l = 0
    a_arr = arr
    for r in range(tot):
        a_val, team = a_arr[r]
        cnt[team] += 1
        if cnt[team] == 1:
            have += 1
        while have == n:
            diff = a_val - a_arr[l][0]
            if diff < ans:
                ans = diff
            team_l = a_arr[l][1]
            cnt[team_l] -= 1
            if cnt[team_l] == 0:
                have -= 1
            l += 1
    sys.stdout.write(str(ans))
OMAR()
