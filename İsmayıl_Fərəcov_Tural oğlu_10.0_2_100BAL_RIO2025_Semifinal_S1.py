l=input()
l=l.split()
l[0]=(int(l[0]))
l[1]=(int(l[1]))
for i in range(l[0],l[1]+1):
    if str(i)==str(i)[::-1]:
        print('Palindrome!')
    else:
        print(i)