l,r=(input().split())
l=int(l)
r=int(r)

for i in range (l,r+1):
    i=str(i)
    if len(i)==1:
        print("Palindrome!")

    else:
        for a in range(int(len(str(i)))):
            if int(i[a]) != int(i[a + 1]):
                print(i)
                break

            else:
                print("Palindrome!")






















