n = input().split(" ")
a1 = int(n[0]) ; a2 = int(n[1])

for i in range(a1,a2+1):
    if len(str(i)) == 1:
        print("Palindrome!")
    elif str(i) == str(i)[::-1]:
        print("Palindrome!")
    else:
        print(i)