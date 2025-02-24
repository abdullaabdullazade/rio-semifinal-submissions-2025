a=input()
b=a.split()
l=b[0]
r=b[-1]
j=int(l)
d=int(r)
for i in range(j,d+1):
    c=str(i)
    if str(i)==c[::-1]:
         print("Palindrome!")
    else:
        print(i)