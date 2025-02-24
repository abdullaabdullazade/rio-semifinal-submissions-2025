def check_is_palindrome(l, r):
    l = int(l)
    r = int(r)
    for number in range(l, r+1):
        num = str(number)
        if num == num[::-1]:
            print("Palindrome!")
        else:
            print(number)
l, r = input().split( )
check_is_palindrome(l, r)