import sys
a, b = map(int, sys.stdin.read().split())
res = []
for x in range(a, b + 1):
    s = str(x)
    if s == s[::-1]:
        res.append("Palindrome!")
    else:
        res.append(s)
sys.stdout.write("\n".join(res))

