l, r = input().split()
m = int(l)
k = int(r)
for i in range(m-1,k):
    i = i + 1
    if i < 10 or i % 11 == 0:
        print("Palindrome!")
    else:
        print(i)