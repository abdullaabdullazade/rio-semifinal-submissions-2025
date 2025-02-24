l,r=map(int,input().split())
for i in range(l,r+1):

    s=0
    i=str(i)
    b=len(i)
    for j in range(b//2):
        if i[j]==i[b-j-1]:
            s+=1
        
        
    if s==b//2:
        print("Palindrome!")
    else:
        print(int(i))
