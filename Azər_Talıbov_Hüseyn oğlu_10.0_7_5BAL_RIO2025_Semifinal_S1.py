
l , r= map(int,input().split())

for i in range (l,r+1):
    i=str(i)
    j=""
    for k in i:
        j=k+j
    if len(i) == 1:
        print("Palindrome!")
    elif i == j:
        print("Palindrome!")
    else:
        print(i)
