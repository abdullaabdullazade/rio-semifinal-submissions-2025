a = input()
a = a.split()
for i in range(int(a[0]), int(a[1])+1):
    b = str(i)
    if b == b[-1::-1]:
        print("Palindrome!")
    else:
        print(i)