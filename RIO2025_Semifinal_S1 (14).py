r,l = input().split()
r1 = list(r)
l = int(l)
r1.reverse()
r2 = int(r)
while l != r2-1:
    if list(str(r)) == r1:
        print("Palindrome!")
    else:
        print(r)
    r = int(r)
    r+=1
    r1 = list(str(r))
    r1.reverse()
    l -= 1
