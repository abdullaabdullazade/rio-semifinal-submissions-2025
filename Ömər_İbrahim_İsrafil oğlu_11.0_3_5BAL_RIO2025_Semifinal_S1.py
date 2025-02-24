l = input()
l = list(l)

r = (l[2])
if l[3]:
    r2 = (l[3])

else:
    r2 = ""

r = str(r+ r2)
l = int(l[0])

for n in range(l, (int(r) + 1)):
    s = str(n)
    if s == s[::-1]:
        print("Palindrome!")
    else:
        print(n)
