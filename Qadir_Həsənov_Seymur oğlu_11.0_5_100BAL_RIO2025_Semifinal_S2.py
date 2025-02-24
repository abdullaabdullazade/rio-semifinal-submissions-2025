a=int(input())
for i in range(a):
    b=int(input())
    l=list(map(int,input().split()))
    l1=l.copy()
    say=1
    k=0
    l1.sort()
    d={}

    for j in range(b):
        d[l[j]]=j
        
    for j in range(b):
        d[l1[j]]=j

    while k<b:
        if k==b-1:
            print(say)
            break
        if d[l[k]]+1==d[l[k+1]] or d[l[k]]-1==d[l[k+1]]:
            pass
        else:
            say+=1
        k+=1
    
        
