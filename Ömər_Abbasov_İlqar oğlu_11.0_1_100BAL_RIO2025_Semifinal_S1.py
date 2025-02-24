l, r = map(int, input().split())
for i in range(l, r + 1):
    num = str(i)
    if num == num[::-1]:
        print("Palindrome!")
    else:
        print(i)