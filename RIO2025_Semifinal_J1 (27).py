t = int(input())
if 1 <= t <= 1000:
    for i in range(t):
        a = input()
        acs = a.split(" ")
        c = acs[0]
        cs = c.split(":")
        ss = int(cs[0])
        dd = int(cs[1])
        b = int(acs[1])
        if b >=60:
            ss1 = b//60
            ss2 = b%60
            if (ss + ss1) >= 24:
                ss = ss - 24
                if (dd + ss2) >= 60:
                    ss = ss + ((dd + ss2)//60)
                    dd = (dd+ss2)%60
                    if (ss + ss1) < 10 and (dd + ss2) < 10:
                        print("0"+str(ss + ss1)+":"+"0"+str(dd + ss2))
                    elif (ss + ss1) < 10 and (dd + ss2) >= 10:
                        print("0"+str(ss + ss1)+":"+str(dd + ss2))
                    elif (ss + ss1) >= 10 and (dd + ss2) < 10:
                        print(str(ss + ss1)+":"+"0"+str(dd + ss2))
                    elif (ss + ss1) >= 10 and (dd + ss2) >= 10:
                        print(str(ss + ss1)+":"+str(dd + ss2))
                else:
                    print(str(ss + ss1) + ":" + str(dd + ss2))
            else:
                print(str(ss + ss1) + ":" + str(dd + ss2))
        else:
            if (dd + b) >= 60:
                nss = (dd + b)//60
                ndd = (dd + b)%60
                print(str(ss + nss) + ":" + str(dd + ndd))
            else:
                print(str(ss)+":" +str(dd + b))





