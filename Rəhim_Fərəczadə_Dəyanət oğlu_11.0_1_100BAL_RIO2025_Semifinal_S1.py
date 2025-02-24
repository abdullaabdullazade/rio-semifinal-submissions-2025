#eded polindrom olarsa palindrome cixixsa ver
def polindrom(n):
        k=str(n)
        if k==k[::-1]:
                return True
        return False
l,r=map(int,input().split())
for i in range(l,r+1):
        if polindrom(i)==True:
                print("Palindrome!")
        else:
                print(i)
