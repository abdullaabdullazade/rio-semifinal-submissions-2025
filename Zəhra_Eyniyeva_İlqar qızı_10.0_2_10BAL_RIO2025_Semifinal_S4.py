n,k=map(int,input().split())
lst=list(map(int,input().split()))
lst_scd=list(map(int,input().split()))
raz=10**9+1
for i in lst:
    for j in lst_scd:
        a=abs(i-j)
        raz=min(raz, a)
print(raz)
