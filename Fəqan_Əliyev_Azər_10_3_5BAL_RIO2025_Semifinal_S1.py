n , k  = map(int,input().split())
for i in range(n,k+1):
    if i<10:
        print('Palindrome!')
    elif i//10==i%10:
        print('Polindrome!')
    else:
        print(i)
