t=int(input())
if 1<=t<=1000:
    for i in range(t):
        a=input()
        s=a.split()
        l=s[0].split(":")
        saat=int(l[0])
        deq=int(l[1])
        elave=int(s[1])
        if 0<elave<10**9 and 0<=saat<24 and 0<=deq<60:
            if deq+elave>=60:
                w=(deq+elave)%60
            else:
                w=deq+elave
            if saat+(deq+elave)//60>=24:
                q=saat+(deq+elave)//60-24*(deq+elave)//60
            else:
                q=saat+(deq+elave)//60
            if w < 10:
                w = f'0{w}'
            else:
                w = f'{w}'
            if q < 10:
                q = f'0{q}'
            else:
                q = f'{q}'
            print(q+':'+w)
