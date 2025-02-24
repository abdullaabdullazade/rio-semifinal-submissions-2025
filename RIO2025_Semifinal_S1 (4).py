n,m=map(int,input().split())
p=[]
for i in range(n,m+1):
    if i>9 and i%11==0:
        print('Palindrome!')
    elif i<=9:
        print('Palindrome!')
    else:
        print(i)


