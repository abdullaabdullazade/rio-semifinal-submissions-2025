t = int(input())

for i in range(t):
    a, b =input().split() 
    c, d = map(int,a.split(":"))
    b=int(b)
    sm = (60*c+d+b)%1440
    
    res_a = sm//60
    res_b = sm%60
    
    if len(str(res_a))==1:
        res_a='0'+str(res_a)
    if len(str(res_b))==1:
        res_b='0'+str(res_b)
    print(res_a,':',res_b,sep='')
    
    
"""
22*60+59+61


"""