vvod = input()
pervoe = ""
vtoroe = ""
for i in range(len(vvod)):
    if vvod[i] == " ":
        nomer=i
        nomm = nomer
        for i in range(nomer):
            pervoe = pervoe + str(vvod[i])
        for c in range(len(vvod)-nomer):
            vtoroe = vtoroe+str(vvod[nomm])
            nomm = nomm + 1

n=[int(pervoe),int(vtoroe)]
def check(n):
    ab = n[0]
    b = n[1]
    count = b-int(ab)
    for i in range(count):
        for i in range(len(str(ab))):
            if ab==b:
                break

            else:
                a = str(ab)


                if a[0] == str(ab)[(len(str(ab))-1)]:
                        prv = 0
                        psl = int(len(str(a)) - 1)
                        for i in range(len(str(ab))):
                            if len(str(ab)) == 0:
                                print("Palendrome!")
                                break
                            if a[prv] == a[psl]:
                                if psl == 0:
                                    print("Palindrome!")
                                    if len(str(ab))==1:
                                        pass
                                    else:
                                        print(ab)
                                else:
                                    prv = prv + 1
                                    psl = psl - 1
                                    if prv == psl:
                                        print("Palindrome!")
                            if ab == b:
                                break
                            else:
                                ab = int(ab) + 1


                else:
                    print(ab)
                    if ab ==b:
                        break
                    else:
                        ab = int(ab)+1

check(n)