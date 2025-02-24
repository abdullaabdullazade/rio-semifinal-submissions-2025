pal = 'Palindrome!'

l, r = map(int, input().split())

for n in range(l, r+1):
    eded = str(n)
    for x in range(len(eded)):
        if eded[x] == eded[-x-1]:
            print(pal)
            break
        else:
            print(eded)
            break
#yadimnan cixdiye break