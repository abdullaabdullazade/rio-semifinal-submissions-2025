l, r = input().split()
list = []
pali = [1,2,3,4,5,6,7,8, 9, 11, 22, 33, 44, 55, 66, 77, 88, 99, 101, 111,222,333,444,555,666,777,888,999, 101, 202, 303, 404, 505, 606, 707, 808, 909, 1001, 1111, 2222,3333,4444,5555,6666,7777,9999,8888, 2002, 3003, 4004, 5005, 6006, 7007, 8008, 9009, 10001, 11011,12021, 13031, 14041, 15051, 16061, 17071, 18081, 19091, 20002, 210012, 220022, 230032, 240042, 250052, 260062, 270072, 280082, 290092, 300003, 310013, 320023, 330033,340043, 350053,360063,370073,380083,390093,400004,410014,420024,430034,440044,444444,450054,460064,470074,480084,490094,111111,222222,333333,444444,555555,66666,777777,88888,9999, 100001, 100001, 1000001, 99999, 999999, 88888, 111111,190091, 120021, 110011, 33333]
for i in range(int(l), int(r)+1):
    if i in pali:
        list.append('Palindrome!')
    else:
        list.append(i)
for i in range(len(list)):
    print(list[i])

