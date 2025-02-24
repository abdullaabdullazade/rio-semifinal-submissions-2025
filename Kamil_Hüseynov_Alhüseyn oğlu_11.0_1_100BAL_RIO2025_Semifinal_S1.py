araliq = list(map(int , input().split()))
for i  in range(araliq[0],araliq[1]+1):
    k = str(i)
    c = k[::-1]
    if k == c :
        print('Palindrome!')
    else :
        print(k)