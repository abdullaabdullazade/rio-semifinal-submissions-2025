l,r=(input().split())
l=int(l)
r=int(r)

for i in range (l,r+1):
    i=str(i)
    if len(i)==1:
        print("Palindrome!")

    else:
        for a in range(int(len(i))-1):
            if int(i[a]) == int(i[-1]):
                print("Palindrome!")


            else:
                print(i)






















