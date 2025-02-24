l,r = input().split(" ")
l = int(l)
r = int(r)
list_dummy = []

for i in range(l, r+1):
    if len(str(i)) == 1:
        print("Palindrome!")
        continue

    else:
        if len(str(i))%2 == 0:
            if str(i)[:len(str(i))//2] == str(i)[len(str(i))//2:]:
                print("Palindrome!")
                continue

        else:
            # print(str(i)[:len(str(i))//2+1])
            # print(str(i)[len(str(i))//2+2:])
            if str(i)[:len(str(i))//2] == str(i)[len(str(i))//2+1:]:
                print("Palindrome!")
                continue

    print(i)