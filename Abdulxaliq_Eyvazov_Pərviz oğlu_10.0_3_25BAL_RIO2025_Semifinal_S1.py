pal = 'Palindrome!'

l, r = map(int, input().split())

for n in range(l, r+1):
    eded = str(n)
    for x in range(len(eded)):
        x -= 1
        if eded[x + 1::] == eded[::x]:
            eded = eded[x + 1:]
            print(pal)
            break
        else:
            print(eded)
            break
#yadimnan cixdiye break