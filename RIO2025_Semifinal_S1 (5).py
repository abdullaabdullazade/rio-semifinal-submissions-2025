def pal(a):
    return str(a)==str(a)[::-1]
a=input().split()
for i in range(int(a[0]),int(a[1])+1):
    if pal(i):
        print("Palindrome!")
    else:
        print(i)