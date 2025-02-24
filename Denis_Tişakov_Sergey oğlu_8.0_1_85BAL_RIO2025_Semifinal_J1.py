t = int(input())
assert 1 <= t <= 1000
tests = [input().split(' ') for x in range(t)]
assert all(len(x) == 2 for x in tests)

for x in tests:
    d = int(x[1])
    assert 0 <= d <= 10**9
    time = x[0].split(':')
    ss, dd = time
    assert len(ss) == 2 and len(dd) == 2
    assert 1 <= d <= 10**9
    assert 0 <= int(ss) <= 23
    assert 0 <= int(dd) <= 59
    ss, dd = int(ss), int(dd)

    dd += d % 60
    ss += (d // 60) % 24 + dd // 60
    if dd >= 60: dd -= 60
    if ss >= 24: ss -= 24
    if len(str(dd)) < 2: dd = '0' + str(dd)
    if len(str(ss)) < 2: ss = '0' + str(ss)
    print(f'{ss}:{dd}')

