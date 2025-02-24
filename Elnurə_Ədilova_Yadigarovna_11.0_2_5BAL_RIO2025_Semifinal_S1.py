l,r=map(int,input().split())
if 1<=l<=r<=10**18 and r-l+1<=10**5:
    for i in range(l,r+1):
        if str(i)==str(i)[::-1]:
            print("Palindrome!")
        else: print(i)