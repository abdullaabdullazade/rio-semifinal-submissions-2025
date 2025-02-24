l,r = map(int,input().split())

for i in range(l,r+1):
    len_i = len(str(i))
    str_i = list(str(i))

    
    str_i = "".join(reversed(str_i))
    


    if  str(i)==str_i:
        print("Palindrome!")
    else: 
        print(i)