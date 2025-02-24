l,r = map(int,input().split())


if l==2:
    c = map(int,input().split())
    d = map(int,input().split())
    res = 1e9
    c=sorted(c)
    d=sorted(d)
    
    for i in range(r):
        for j in range(r):
            diff = abs(c[i]-d[j])
            #print(diff,d[i],c[j])
            res= min(res,diff)
    print(res)
    


