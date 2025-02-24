l,r=map(int,input().split())
if l>=1 and l<=r and r<=10**18 and r-l+1<=10**5:
    for i in range(l,r+1):
        k=str(i)
        if k==k[::-1]:
            print('Palindrome!')
        else:
            print(i)
