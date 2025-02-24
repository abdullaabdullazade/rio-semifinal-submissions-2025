l=8
r=12
if 1<=l<=r<=10**18 and (r-l)+1<=10**5: 
   for i in range(l,r+1):
    a=''
    i=str(i)
    for m in(i):
        a=m+a
    if i==a:
        print('Palindrome!')
    else:
        print(i)