a, b = map(int, input().split(" "))
for j in range(a, b+1):
    if str(j )== str(j)[::-1]:
        print("Palindrome!")
    else:
        print(j)
