l, r = input().split()
list = []
pali = [8,9, 11, 22, 33, 44, 55, 66, 77, 88, 99, 101, 202, 303, 404, 505, 606, 707, 808, 909, 1001]
for i in range(int(l), int(r)+1):
    if i in pali:
        list.append('Palindrome!')
    else:
        list.append(i)
for i in range(len(list)):
    print(list[i])

