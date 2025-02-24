numbers = input();
list = numbers.split(" ")

for i in range(int(list[0]), int(list[1]) + 1):
    if i < 10:
        print("Palindrome!")
    elif i >= 10:
        k = str(i)
        if k == k[::-1]:
            print("Palindrome!")
        else:
            print(i)

