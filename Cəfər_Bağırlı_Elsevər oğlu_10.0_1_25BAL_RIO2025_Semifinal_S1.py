l,r = input().split(" ")
l = int(l)
r = int(r)
for i in range(l,r+1):
    d= i % 10 
    g = i // 10
    if i == d:  
        print("Palindrome!")
    elif d == g:
        print("Palindrome!")
    else:
        print(i)