l, r = map(int,input().split())
while l<=r :
    a=str(l)
    s=a[::-1]
    if a == s:
        print("Palindrome!")
    else:
        print(l)
    l+=1