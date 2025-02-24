def p(i):
    k=0
    i=str(i)
    for j in range(0,len(i)//2+1):
        if i[j]==i[len(i)-j-1]:
            k=k+1
  
    if len(i)==1:
        return("Palindrome!")
    else:
        if k==len(i)//2+1:
            return("Palindrome!")
        else:
            return(int(i))
            


n,b=map(int,input().split())
for i in range(n,b+1):
    print(p(i))
    
