r,l=input().split()
r=int(r)
l=int(l)
s=0
for i in range(r,l+1):
    a=i
    i=str(i)
    i=list(i)
    b=len(i)
    if b==i:
        print('palindrome!')
    else:
        for k in range(0,b):
            c=k+1
        if i[k]==[b-c]:
            s+=1
            print(s)
        if s==b/2:
                print('polindrome!')
        else:
            print(a)
                    
            
     
