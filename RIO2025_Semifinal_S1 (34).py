def pol(n):
    n=str(n)
    n=list(n)
    k=0
    if len(n)==1:
        return True
    else:
        for i in range((len(n))//2):
            if int(n[i])==int(n[len(n)-1-i]):
                k+=1
        if k==len(n)//2:
            return True
        else:
            return False
l,r=map(int,input().split())
for i in range (l,r+1):
    if pol(i)==True:
        print("Palindrome!")
    else:
        print(i)
    
    
