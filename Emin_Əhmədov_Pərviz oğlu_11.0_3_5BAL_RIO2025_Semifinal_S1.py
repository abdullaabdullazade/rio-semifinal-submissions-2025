l, r = map(int, input().split())
s = ""

for i in range(l, r+1):
    if (i == ((i%10)*10) + i//10) or (0<i<10) or (i == (i%10)*100 + ((i//10)%10)*10 + (i//100)*1):
        print("Palindrome!")
    else:
        print(i)
