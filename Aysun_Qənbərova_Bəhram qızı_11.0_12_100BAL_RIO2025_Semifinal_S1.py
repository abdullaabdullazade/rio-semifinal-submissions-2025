l,r=(input()).split()
for i in range(int(l),int(r)+1):
   a=str(i)
   if a==a[::-1]:  
     print('Palindrome!')
   else:
        print(int(a))
