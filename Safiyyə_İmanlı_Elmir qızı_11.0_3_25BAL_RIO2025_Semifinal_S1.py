l, r = map(int, input().split())
for i in range(l, r+1):
    if len(str(i))==1:
        print('Palindrome!')
        continue
    elif len(str(i)) == 2 and str(i)[0] == str(i)[1]:
        print('Palindrome!')
        continue
    for j in range(1, len(str(i))):
        if str(i)[j-1] != str(i)[len(str(i))-j]:
            print(i)
            break
        else:
            print('Palindrome!')
    