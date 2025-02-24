n,m=map(int,input().split())
p=[]
for i in range(n,m+1):
    i=str(i)
    if i==i[::-1]:
        print("Palindrome!")
    else:
        print(i)



