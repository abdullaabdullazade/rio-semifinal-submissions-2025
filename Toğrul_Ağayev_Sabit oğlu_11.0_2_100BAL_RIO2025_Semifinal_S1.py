a, b = map(int, input().split())
#a = int(input())
#b = int(input())
s = ""
for i in range(a, b + 1):
    s = str(i);
    reverse_s = s[::-1]
    if s == reverse_s:
        print("Palindrome!")
    else:
        print(i)
