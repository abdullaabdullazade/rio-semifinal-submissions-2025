l,r = map(int,input().split())
for i in range(l,r+1):
	if(len(str(i))==1):
		print("Palindrome!")
	elif(str(i)==str(i)[::-1]):
		print("Palindrome!")
	else:
		print(i)