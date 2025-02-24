n = list(map(int, input().split()))
i = 0
for i in range(n[0], n[1] + 1):
    string = str(i)

    if len(string) == 1:
        print("Palindrome!")
    else:
        string_r = list(string[len(string)//2:])
        length = len(string_r)
        string_l = list(string[:length//2 + 1])
        new_string_r = []
        for k in range(length, 0, -1):
            new_string_r.append(string_r[k - 1])
        if string_l == new_string_r:
            print("Palindrome!")
        else:
            print(i)