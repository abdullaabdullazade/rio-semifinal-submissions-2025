import string
from token import STRING
from xml.etree.ElementTree import tostring

a = input().split(" ")
l = int(a[0])
r = int(a[1])


for i in range(l, r+1 ,1):
    if len(type.__str__(i)) == 1:
        print("Palindrome!")
    else:
        if type.__str__(i) == type.__str__(i)[::-1]:
            print("Palindrome!")
        else:
            print(i)
