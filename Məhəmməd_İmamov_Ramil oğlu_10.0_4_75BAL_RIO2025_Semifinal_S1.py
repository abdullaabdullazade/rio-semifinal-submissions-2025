l, r = map(int, input().split())
for i in range(l, r + 1):
    a = len(str(i))
    # 1
    if a == 1:
        print("Palindrome!")
    # 2
    elif a == 2:
        i1 = i // 10
        i2 = i % 10
        if i1 == i2:
            print("Palindrome!")
        else:
            print(i)
    # 3
    elif a == 3:
        i1 = i // 100
        i3 = i % 10
        if i1 == i3:
            print("Palindrome!")
        else:
            print(i)
    # 4
    elif a == 4:
        i1 = i // 1000
        i2 = i // 100 % 10
        i3 = i // 10 % 10
        i4 = i % 10
        if i1 == i4 and i2 == i3:
            print("Palindrome!")
        else:
            print(i)
    # 5
    elif a == 5:
        i1 = i // 10000
        i2 = i // 1000 % 10
        i3 = i // 100 % 10
        i4 = i // 10 % 10
        i5 = i % 10
        if i1 == i5 and i2 == i4:
            print("Palindrome!")
        else:
            print(i)
    # 6
    elif a == 6:
        i1 = i // 100000
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i1 == i6 and i2 == i5 and i3 == i4:
            print("Palindrome!")
        else:
            print(i)
    # 7
    elif a == 7:
        i7 = i // 1000000
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i7 == i6 and i1 == i5 and i2 == i4:
            print("Palindrome!")
        else:
            print(i)
    # 8
    elif a == 8:
        i8 = i // 10000000
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i8 == i6 and i7 == i5 and i1 == i4 and i2 == i3:
            print("Palindrome!")
        else:
            print(i)
    # 9
    elif a == 9:
        i9 = i // 100000000
        i8 = i // 10000000 % 10
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i9 == i6 and i8 == i5 and i7 == i4 and i1 == i3:
            print("Palindrome!")
        else:
            print(i)
    # 10
    elif a == 10:
        i10 = i // 1000000000
        i9 = i // 100000000 % 10
        i8 = i // 10000000 % 10
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i10 == i6 and i9 == i5 and i8 == i4 and i7 == i3 and i1 == i2:
            print("Palindrome!")
        else:
            print(i)
    # 11
    elif a == 11:
        i11 = i // 10000000000
        i10 = i // 1000000000 % 10
        i9 = i // 100000000 % 10
        i8 = i // 10000000 % 10
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i11 == i6 and i10 == i5 and i9 == i4 and i8 == i3 and i7 == i2:
            print("Palindrome!")
        else:
            print(i)
    # 12
    elif a == 12:
        i12 = i // 100000000000
        i11 = i // 10000000000 % 10
        i10 = i // 1000000000 % 10
        i9 = i // 100000000 % 10
        i8 = i // 10000000 % 10
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i12 == i6 and i11 == i5 and i10 == i4 and i9 == i3 and i8 == i2 and i7 == i1:
            print("Palindrome!")
        else:
            print(i)
    # 13
    elif a == 13:
        i13 = i // 1000000000000
        i12 = i // 100000000000 % 10
        i11 = i // 10000000000 % 10
        i10 = i // 1000000000 % 10
        i9 = i // 100000000 % 10
        i8 = i // 10000000 % 10
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i13 == i6 and i12 == i5 and i11 == i4 and i8 == i3 and i7 == i2:
            print("Palindrome!")
        else:
            print(i)
    # 14
    elif a == 14:
        i14 = i // 10000000000000
        i13 = i // 1000000000000 % 10
        i12 = i // 100000000000 % 10
        i11 = i // 10000000000 % 10
        i10 = i // 1000000000 % 10
        i9 = i // 100000000 % 10
        i8 = i // 10000000 % 10
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i14 == i6 and i13 == i5 and i12 == i4 and i11 == i3 and i10 == i2 and i9 == i1 and i8 == i7:
            print("Palindrome!")
        else:
            print(i)
    # 15
    elif a == 15:
        i15 = i // 100000000000000
        i14 = i // 10000000000000 % 10
        i13 = i // 1000000000000 % 10
        i12 = i // 100000000000 % 10
        i11 = i // 10000000000 % 10
        i10 = i // 1000000000 % 10
        i9 = i // 100000000 % 10
        i8 = i // 10000000 % 10
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i15 == i6 and i14 == i5 and i13 == i4 and i12 == i3 and i11 == i2 and i10 == i1 and i9 == i7:
            print("Palindrome!")
        else:
            print(i)
    # 16
    elif a == 16:
        i16 = i // 1000000000000000
        i15 = i // 100000000000000 % 10
        i14 = i // 10000000000000 % 10
        i13 = i // 1000000000000 % 10
        i12 = i // 100000000000 % 10
        i11 = i // 10000000000 % 10
        i10 = i // 1000000000 % 10
        i9 = i // 100000000 % 10
        i8 = i // 10000000 % 10
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i16 == i6 and i15 == i5 and i14 == i4 and i13 == i3 and i12 == i2 and i11 == i1 and i10 == i7 and i9 == i8:
            print("Palindrome!")
        else:
            print(i)
    # 17
    elif a == 17:
        i17 = i // 10000000000000000
        i16 = i // 1000000000000000 %10
        i15 = i // 100000000000000 % 10
        i14 = i // 10000000000000 % 10
        i13 = i // 1000000000000 % 10
        i12 = i // 100000000000 % 10
        i11 = i // 10000000000 % 10
        i10 = i // 1000000000 % 10
        i9 = i // 100000000 % 10
        i8 = i // 10000000 % 10
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i17 == i6 and i16 == i5 and i15 == i4 and i14 == i3 and i13 == i2 and i12 == i1 and i11 == i7 and i10 == i8:
            print("Palindrome!")
        else:
            print(i)
    # 18
    elif a == 18:
        i18 = i // 100000000000000000
        i17 = i // 10000000000000000 %10
        i16 = i // 1000000000000000 % 10
        i15 = i // 100000000000000 % 10
        i14 = i // 10000000000000 % 10
        i13 = i // 1000000000000 % 10
        i12 = i // 100000000000 % 10
        i11 = i // 10000000000 % 10
        i10 = i // 1000000000 % 10
        i9 = i // 100000000 % 10
        i8 = i // 10000000 % 10
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i18 == i6 and i17 == i5 and i16 == i4 and i15 == i3 and i14 == i2 and i13 == i1 and i12 == i7 and i11 == i8 and i10==i9:
            print("Palindrome!")
        else:
            print(i)
    # 18
    elif a == 19:
        i19 = i // 1000000000000000000
        i18 = i // 100000000000000000 %10
        i17 = i // 10000000000000000 % 10
        i16 = i // 1000000000000000 % 10
        i15 = i // 100000000000000 % 10
        i14 = i // 10000000000000 % 10
        i13 = i // 1000000000000 % 10
        i12 = i // 100000000000 % 10
        i11 = i // 10000000000 % 10
        i10 = i // 1000000000 % 10
        i9 = i // 100000000 % 10
        i8 = i // 10000000 % 10
        i7 = i // 1000000 % 10
        i1 = i // 100000 % 10
        i2 = i // 10000 % 10
        i3 = i // 1000 % 10
        i4 = i // 100 % 10
        i5 = i // 10 % 10
        i6 = i % 10
        if i19 == i6 and i18 == i5 and i17 == i4 and i16 == i3 and i15 == i2 and i14 == i1 and i13 == i7 and i12 == i8 and i11 == i9:
            print("Palindrome!")
        else:
            print(i)