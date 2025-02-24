def palindromdurmu(a):
    a=list(str(a))
    b=a.copy()
    b.reverse()
    if a==b:
        return "Palindrome!"

        print(a)
l,r=map(int,input().split())
for i in range(l, r+1):
    if palindromdurmu(i)=="Palindrome!":
        print("Palindrome!")
    else:
        print(i)