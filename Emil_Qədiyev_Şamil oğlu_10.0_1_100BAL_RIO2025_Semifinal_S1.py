def check_polindrome(num: int) -> bool:
    num = str(num)
    l = len(num)
    l += 0 if l % 2 == 0 else 1
    l /= 2
    for i in range(int(l)):
        if num[i] != num[- 1 - i]:
            return False
    return True

def solution(l: int, r: int):
    for i in range(l, r+1):
        if check_polindrome(i):
            print("Palindrome!")
        else:
            print(i)

nums = input().split()
solution(int(nums[0]), int(nums[1]))