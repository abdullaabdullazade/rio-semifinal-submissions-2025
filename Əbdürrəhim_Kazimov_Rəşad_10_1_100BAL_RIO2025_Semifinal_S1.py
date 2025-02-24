l,r=map(int,input().split(" "))
def yoxla(i):
    if i==i[::-1]:
        print("Palindrome!")
    else:
        print(i)
for i in range(l,int(r)+1):
    i=str(i)
    yoxla(i)
