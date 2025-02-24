l,r=8,12
for i in range(l,(r+1)):
    i=str(i)
    b=i[::-1]
    b=int(b)
    i=int(i)
    if i == b:
        print("Palindrome!")
    else:
        print(i)


