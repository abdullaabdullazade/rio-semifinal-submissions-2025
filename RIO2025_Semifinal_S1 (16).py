a,b=map(int,input().split())
for i in range(a,b+1):
    q=str(i)
    if len(q)==1:
        print("Palindrome!")
    else:
        q=q[::-1]
        if str(i)==q:
            print("Palindrome!")
        else:
            print(i)
