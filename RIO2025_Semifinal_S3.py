import math
bitti = False
def f(lazim, arr, yek, lazimArr, count):
    global bitti
    if bitti==False:
        if yek == lazim and len(lazimArr) != 0 and len(lazimArr)!=len(arr):
            hii = []
            print(len(lazimArr))
            for i in range(0, len(lazimArr)):
                hii.append(arr.index(lazimArr[i]) + 1)
                arr[arr.index(lazimArr[i])] = 0.24385943854375
            print(" ".join(sorted(list(map(str, hii)))))
            bitti = True
            return
        if count == -1:
            return
        f(lazim, arr, yek, lazimArr, count - 1)
        lazimArr.append(arr[count])
        yek = sum(lazimArr)
        f(lazim, arr, yek, lazimArr, count - 1)
        lazimArr.pop()


cases = int(input())
for i in range(0, cases):
    bitti = False
    n = int(input())
    arr = list(map(int, input().split(" ")))
    b = []
    for j in range(0, len(arr)):
        if j == len(arr)-1:
            b.append(math.fabs(arr[j] - arr[0]))
        else:
            b.append(math.fabs(arr[j] - arr[j + 1]))
    cem = sum(b)
    if cem%2!=0:
        print("-1")
    else:
        f(cem//2, b, 0,[],len(arr)-1)
        if bitti==False:
            print("-1")
