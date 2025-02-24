l,r = map(int,input().split())

for i in range(l,r+1):
    len_i = len(str(i))
    str_i = str(i)
    if i<10 or len_i*'1'==str_i  or len_i*'2'==str_i  or len_i*'3'==str_i  or len_i*'4'==str_i  or len_i*'5'==str_i  or len_i*'6'==str_i  or len_i*'7'==str_i  or  len_i*'8'==str_i   or len_i*'9'==str_i:
        print("Palindrome!")
    else: 
        print(i)