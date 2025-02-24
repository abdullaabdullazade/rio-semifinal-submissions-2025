l, r = input().split()
l = int(l)
r = int(r)

for e in range(l,r+1):
    if list(str(e)) == list(list(str(e)).__reversed__()):
        print("Palidrome!")
    else:
        print(e)