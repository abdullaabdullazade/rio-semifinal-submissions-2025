lr = input()

for m in range(len(lr)):
    if lr[m] == ' ':
        l = int(lr[:m:])
        r = int(lr[m::])
        break
for i in range(l, r+1):
    temp = ''
    for j in range(1, len(str(i))+1):
        
        temp += str(i)[-j]
    if temp == str(i):
        print('Palindrome!')
    else:
        print(i)
