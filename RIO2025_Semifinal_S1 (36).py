def f(x):
    l=list(str(x))
    if str(x)==sorted(l):
        return a
    else:
        return x
n,m=map(int,input().split())
a='Palindrome!'
for i in range(n,m+1):
    if f(i)==a:
        print(a)
    else:
        print(i)