

l , r = map(int, input().split(" "))


for i in range(l , r+1):
    i_ters = 0
    uu = ""
    for j in range(1, int(len(str(i)))+1):
        uu += list(str(i))[-j]
    i_ters = int(uu)

    if i_ters == i:
        print("Palindrome!")
    else:

        print(i)


