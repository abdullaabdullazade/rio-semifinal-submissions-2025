a=input()
a=str(a)
a=a.split()
l=int(a[0])
r=int(a[1])
if l<r:
    i=l
    while i<=r:
        if i<=99:
            a=i%10
            b=i//10
            k=a*10+b
        elif i>99 and i<1000:
            a=i%10
            b=i//10%10
            c=i//100
            k = a * 100 + 10 * b + c
        elif i>=1000 and i<10000:
            a = i % 10
            b = i // 10 % 10
            c = i // 100 % 10
            d= i // 1000
            k= a * 1000 + c * 100 +10 * b + d
        elif i>=10000 and i<100000:
            a = i % 10
            b = i // 10 % 10
            c = i // 100 % 10
            d = i // 10000 %10
            e= i // 10000
            k= a*10000 + b * 1000 + c * 100 + d * 10 +e
        if k==i:
            print("Palindrome!")
        elif i<10:
            print("Palindrome!")
        else:
            print(i)
        i=i+1
elif r<l:
    i=r
    while i<=r:
        a = i % 10
        b = i // 10
        k = a * 10 + b
        if k==i:
            print("Palindrome!")
        elif i<10:
            print("Palindrome!")
        else:
            print(i)
        i=i+1
else:
    i=r=l
    a = i % 10
    b = i // 10
    k = a * 10 + b
    if k == i:
        print("Palindrome!")
    elif i < 10:
        print("Palindrome!")
    else:
        print(i)