lr=input()
lr = lr.split()
l=int(lr[0])
r=int(lr[1])
for i in range(l, r+1):
    i=str(i)
    if i == i[::-1]:
        print("Palindrome!")
    else:
        print(i)
    