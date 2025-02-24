l,r = map(int,input().split())
def ters(a:str):
    b=a.split()
    c=[]
    for i in range(0,len(a)):
        c.append(a[len(a)-i-1])
    return ''.join(c)
result=[]
for i in range(l,r+1):
    i=str(i)
    if ters(i)==i:
        result.append('Palindrome!')
    else:
        result.append(i)
for x in result:
    print(x)