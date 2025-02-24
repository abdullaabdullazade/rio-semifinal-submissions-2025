l,r = input().split(" ")
l = int(l)
r = int(r)


for i in range(l, r+1):
    def if_mirror(part1, part2):
        dummy = []
        new_var = ""
        for x in part2:
            dummy.append(x)
        dummy.reverse()
        for y in dummy:
            new_var = new_var + y

        return new_var == part1
        


    if len(str(i)) == 1:
        print("Palindrome!")
        continue

    else:
        if len(str(i))%2 == 0:
            if if_mirror(str(i)[:len(str(i))//2], str(i)[len(str(i))//2:]):
                print("Palindrome!")
                continue

        else:
            if if_mirror(str(i)[:len(str(i))//2], str(i)[len(str(i))//2+1:]):
                print("Palindrome!")
                continue
        print(i)