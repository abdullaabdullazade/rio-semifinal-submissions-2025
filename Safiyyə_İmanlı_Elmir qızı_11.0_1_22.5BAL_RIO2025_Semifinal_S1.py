l, r = map(int, input().split())
for i in range(l, r+1):
    k = 0
    if len(str(i))==1:
        print('Palindrome!')
        continue
    if len(str(i)) == 2 and str(i)[0] == str(i)[1]:
        print('Palindrome!')
        continue
    for j in range(1, len(str(i))):
        if str(i)[j-1] == str(i)[len(str(i))-j]:
            k += 1
    if k == 0:
        print(i)
    elif k == len(str(i))+1:
        print('Palindrome!')