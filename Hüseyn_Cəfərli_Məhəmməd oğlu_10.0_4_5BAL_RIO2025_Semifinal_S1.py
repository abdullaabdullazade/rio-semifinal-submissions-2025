l, r = input().split()
for i in range(int(l), int(r) + 1):
    s = str(i)
    if(s[::-1] == s):
        print("Palindrome")
    else:
        print(s)
