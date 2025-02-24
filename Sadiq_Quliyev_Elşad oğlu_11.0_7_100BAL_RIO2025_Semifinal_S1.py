a=(input())
b=a.split(' ')
if 1<=int(b[0]) and int(b[0])<=int(b[1]) and int(b[1])<=10**18 and int(b[1])-int(b[0])+1<=10**5:
    for i in range(int(b[0]),int(b[1])+1):
        s=0
        c=i
        while c>0:
            b=c%10
            s=s*10+b
            c=c//10
        if i==s:
            print('Palindrome!')
        else:
            print(i)
else:
    print('daxil edilən ədədlər şərtə uyğun deyil')