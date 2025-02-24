l,r = list(map (int, input().split()))
# print (l,r)
bool_flag = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
numbers = [num for num in range (l,r+1)]
for i in numbers:
    bool_flag = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
    ires = str (i)
    if i//10 == 0:
        print ("Palindrome!")
    else:
        for k in range ((len(ires)//2)):
            if ires[k] == ires[-1-k]:
                # print ("YES", i)
                # print("Palindrome!")
                bool_flag [k] = 1
            else:
                print (i)
        if len(ires) % 2 != 0:
            bool_flag[20] = 1
        if int(sum(bool_flag)*2) >= len(ires):
            print("Palindrome!")
        else:
            pass
            # print("Not enough")


# print(numbers)


