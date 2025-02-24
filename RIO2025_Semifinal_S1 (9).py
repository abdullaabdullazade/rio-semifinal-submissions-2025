from  collections import deque

n,l = input().split()
i_n = int(n)
i_l = int(l)

for i in range(i_n, i_l+1):
    if(str(i) == str(i)[::-1]):
        print('Palidrome!')
    else:
        print(i)