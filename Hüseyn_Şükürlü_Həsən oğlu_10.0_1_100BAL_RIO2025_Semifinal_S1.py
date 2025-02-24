n = str(input())
A = int( n[0:n.find(" ")] )
B = int( n[n.find(" ")+1: ] )
        
for i in range(A, B+1):
    if str(i)[::-1] == str(i):
        print("Palindrome!")
    else:
        print(i)