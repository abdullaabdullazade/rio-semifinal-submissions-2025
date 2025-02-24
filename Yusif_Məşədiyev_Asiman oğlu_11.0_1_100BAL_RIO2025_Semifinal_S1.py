qq,ss= map(int, input().split())
for i in range (qq,ss+1):
    qq = str(i)
    if qq==qq[::-1]:
        print("Palindrome!")
    else :
        print(i)

    
