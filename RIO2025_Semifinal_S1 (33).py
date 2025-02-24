from collections import Counter, defaultdict
import string
a, b=list(map(int, input().split()))

for i in range(a, b+1):
	eded=str(i)
	if eded==eded[::-1]:
		print("Palindrome!")
	else:
		print(i)