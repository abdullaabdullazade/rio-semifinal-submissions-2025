l=list(map(int,input().split()))
for i in range(l[0],l[1]+1):
    t=True
    x=len(str(i))
    x=int(x)
    for j in range(x//2):
        if str(i)[x-j-1]!=str(i)[j]:
            t=False
    if t==True:
        print('Palindrome!')
    else:
        print(i)
