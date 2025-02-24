l, r = 8, 12
for i in range(l,r+1):
	a=str(i)
	if a==a[::-1]:
		print("Palindrome!")
	else:
		print(i)
