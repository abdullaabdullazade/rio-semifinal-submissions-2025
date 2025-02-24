n, m = map(int, input().split(' '))
assert 1 <= n, m <= 1500
cells = []
for i in range(n):
    cells.append(input())
    assert cells[i].count('0') + cells[i].count('1') == m
cells_y = []
for i in range(m):
    cells_y.append('')
    for j in cells:
        cells_y[i] += j[i]

variants = 0
for x in cells:
    if x.count('0') == m and m > 1:
        for y in cells_y:
            if y.count('0') == n:
                variants += 1
    elif x.count('1') == m and m > 1:
        for y in cells_y:
            if y.count('1') == n:
                variants += 1

    elif x.count('0') >= (m - 1) and m > 1:
        if cells_y[x.index('1')].count('0') == (n - 1):
            variants += 1
    elif x.count('1') >= (m - 1) and m > 1:
        if cells_y[x.index('0')].count('1') == (n - 1):
            variants += 1

    elif m == 1 and x.count('0') == 1:
        if cells_y[0].count('1') == (n - 1):
            variants += 1
        elif cells_y[0].count('0') == n:
            variants += 1
    elif m == 1 and x.count('1') == 1:
        if cells_y[0].count('0') == (n - 1):
            variants += 1
        elif cells_y[0].count('1') == n:
            variants += 1
print(variants)



