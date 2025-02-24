a = input()
b = a.split(" ")
# c = []

for i in range(int(b[0]),int(b[1])+1) :
    k = str(i)
    f = int(len(k)/2)
    d = 0
    l = -1
    # for j in range(0,f):
    #     if k[j] == k[-(j+1)]:
    #         d = j
    #         break
    # if d == int(len(k)/2-1):
    #     print("polindrome")
    #     print(d,len(k))
    # else:
    #     print(int(k))
    m = 0
    while d<f:
        if k[d] != k[l]:
            m = -1
        d+=1
        l-=1
    if m == 0:
        print("Palindrome!")
    else :
        print(int(k))

