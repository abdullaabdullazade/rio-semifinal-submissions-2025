l,r=map(int,input().split())
def p(n):
    n=str(n)
    q=n[::-1]
    if n==q:
        print("Palindrome!")
    else:
        print(n)
for i in range(l,r+1):
    p(i)