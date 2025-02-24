l,r=map(int,input().split())
for i in range(l,r+1):
    a=len(str(i))
    #1
    if a==1:
        print("Palindrome!")
    #2
    elif a==2:
        i1=i//10
        i2=i%10
        if i1==i2:
          print("Palindrome!")
        else:
          print(i)
    #3
    elif a==3:
        i1 = i // 100
        i3 = i % 10
        if i1==i3:
            print("Palindrome!")
        else:
            print(i)
    #4
    elif a==4:
        i1= i//1000
        i2=i//100%10
        i3=i//10%10
        i4=i%10
        if i1==i4 and i2==i3:
            print("Palindrome!")
        else:
            print(i)
    #5
    elif a==5:
        i1=i//10000
        i2=i//1000%10
        i3=i//100%10
        i4=i//10%10
        i5=i%10
        if i1==i5 and i2==i4:
            print("Palindrome!")
        else:
            print(i)
    #6
    elif a==6:
        i1 = i// 100000
        i2 = i // 10000 %10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i1 == i6 and i2 == i5 and i3==i4:
            print("Palindrome!")
        else:
            print(i)
    #7
    elif a==7:
        i7 = i//1000000
        i1 = i // 100000 %10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i7==i6 and i1==i5 and i2==i4:
            print("Palindrome!")
        else:
            print(i)
    #8
    elif a==8:
        i8 = i // 10000000
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i8==i6 and i7==i5 and i1==i4 and i2==i3:
            print("Palindrome!")
        else:
            print(i)
    #9
    elif a==9:
        i9= i//100000000
        i8 = i // 10000000 %10
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i9==i6 and i8==i5 and i7==i4 and i1==i3:
            print("Palindrome!")
        else:
            print(i)
    #10
    elif a==10:
        i10 = i//1000000000
        i9= i//100000000%10
        i8 = i // 10000000 %10
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i10==i6 and i9==i5 and i8==i4 and i7==i3 and i1==i2:
            print("Palindrome!")
        else:
            print(i)