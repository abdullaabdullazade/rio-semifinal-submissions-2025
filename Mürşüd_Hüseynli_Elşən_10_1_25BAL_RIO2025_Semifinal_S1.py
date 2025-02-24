l, r = input().split()
l = int(l)
r = int(r)
m = list()
n = 10
length = 1

for i in range(r - l + 1):
    m.append(l)
    l += 1

for i in range(len(m)):
            # uzunlugun tapilmasi
    while m[i] % n != m[i]:
        n = n * 10
        length += 1
    n = 10
    length = length // 2
    if length == 0:
        length += 1

    for j in range(length):
        eded = m[i] // 10 ** length
        ters_eded = m[i] % 10 ** length
        for k in range(length - 1):
            ters_eded = ters_eded * (10 ** k)
        if eded == ters_eded or m[i]<10:
            print("Palindrome!")
        else:
            print(m[i])
        length = 1


