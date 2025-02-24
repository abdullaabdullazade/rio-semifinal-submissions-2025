import sys
def ooo():
    data = sys.stdin.read().split()
    if not data:
        return
    t = int(data[0])
    pos = 1
    out = []
    for _ in range(t):
        n = int(data[pos])
        pos += 1
        a = list(map(int, data[pos:pos+n]))
        pos += n
        total = 0
        ups = []
        for i in range(n):
            j = (i + 1) % n
            if a[i] < a[j]:
                diff = a[j] - a[i]
                ups.append(i + 1)
            else:
                diff = a[i] - a[j]
            total += diff
        if total == 0:
            out.append("1")
            out.append("1")
        else:
            out.append(str(len(ups)))
            out.append(" ".join(map(str, ups)))
    sys.stdout.write("\n".join(out))
ooo()
