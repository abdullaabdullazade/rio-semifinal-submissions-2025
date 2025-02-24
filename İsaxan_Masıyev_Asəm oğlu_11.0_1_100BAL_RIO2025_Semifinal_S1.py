l,r=map(int,input().split())
elements=[]
for i in range (l,r+1):
  a=str(i)
  if a[::-1]==a: print("Palindrome!")
  else:print(i)