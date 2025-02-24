n,k=map(int,input().split())
komandalar=[]
def modul(a:int)->int:
    if a<0:
        return -a
    else:
        return a
def intlist(strlist:list)->list:
    intlist=[]
    for i in strlist:
        intlist.append(int(i))
    return intlist
for komanda in range(n):
    komandalar.append(intlist(input().split())[:k])
data=[]
for i in range(0,n-1):
    for t in komandalar[i+1]:
        for b in komandalar[i]:
            data.append(modul(t-b))
data.sort()
print(data[0])