l,r=map(int,input().split())
for i in range(l,r+1):
    a=len(str(i))
    if a==1:
        print("Palindrome!")
    elif a==2:
        i1=i//10
        i2=i%10
        if i1==i2:
          print("Palindrome!")
        else:
          print(i)
    elif a==3:
        i1 = i // 100
        i3 = i % 10
        if i1==i3:
            print("Palindrome!")
        else:
            print(i)