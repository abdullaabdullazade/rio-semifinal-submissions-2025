#d deq gec
#ilkvaxt,gecikme input
t=int(input())
#test sayi
while t>0:
    a=input()
#gecikme
    a=a.split()
    t-=1
    b=str(a[0])
    gec=str(a[1])
    ilkdeq=str(b[3]+b[4])
    ilksaat=str(b[0]+b[1])
    sondeq=int(ilkdeq)+int(gec)
    ilksaat=int(ilksaat)
    if sondeq>59:
        sondeq-=60
        ilksaat+=1
        if int(ilksaat)>23:
            ilksaat-=24
    while int(ilksaat)>23:
        ilksaat-=24   
    if sondeq>9 and ilksaat>9:
        print(f"{ilksaat}:{sondeq}")
    elif sondeq>9 and ilksaat<=9:
        print(f"0{ilksaat}:{sondeq}")
    elif sondeq<=9 and ilksaat>9:
        print(f"{ilksaat}:0{sondeq}")
    elif  sondeq<=9 and ilksaat<=9:
        print(f"0{ilksaat}:0{sondeq}")

    
