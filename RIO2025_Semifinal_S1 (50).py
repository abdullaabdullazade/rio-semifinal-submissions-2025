l,r=map(int,input().split())
for i in range (l,r+1):
    i=str(i)
    if i[:]==i[::-1]:
        print("Palindrome!")
    else:
        print(i)
    
