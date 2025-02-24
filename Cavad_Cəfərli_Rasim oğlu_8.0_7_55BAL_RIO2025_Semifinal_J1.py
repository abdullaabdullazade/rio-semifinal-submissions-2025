#d deq gec
#ilkvaxt,gecikme input
t=int(input())
t1=t
t2=t1
#test sayi
cavab=[]
i=0
while t>0:
    a=input()
#gecikme
    cavab.append(1)
    a=a.split()
    t-=1
    b=str(a[0])
    gec=str(a[1])
    ilkdeq=str(b[3]+b[4])
    ilksaat=str(b[0]+b[1])
    sondeq=int(ilkdeq)+int(gec)
    ilksaat=int(ilksaat)
    while sondeq>59:
        ilksaat+=sondeq//60
        sondeq-=(sondeq//60)*60
        
        while int(ilksaat)>23:
            ilksaat=ilksaat%24
    while int(ilksaat)>23:
        ilksaat-=24
    if sondeq>9 and ilksaat>9:
        cavab[i]=(f"{ilksaat}:{sondeq}")
    elif sondeq>9 and ilksaat<=9:
        cavab[i]=(f"0{ilksaat}:{sondeq}")
    elif sondeq<=9 and ilksaat>9:
        cavab[i]=(f"{ilksaat}:0{sondeq}")
    elif  sondeq<=9 and ilksaat<=9:
        cavab[i]=(f"0{ilksaat}:0{sondeq}")
    i+=1
i=0
while t1>0:
    print(cavab[i])
    t1-=1
    i+=1


exit(0)
