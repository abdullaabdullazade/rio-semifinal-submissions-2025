

def f(normal, sor, count):

    if normal == []:
        return count-2
    for i in range(len(sor), 0,-1):
        new = sor[0:i]
        if "$".join(list(map(str, new))) in "$".join(list(map(str, normal))) or "$".join(list(map(str, new))) in "$".join(list(map(str, list(normal.__reversed__())))):
            for i in range(0, len(new)):
                normal.remove(new[i])
                sor.remove(new[i])
                count+=1

    return f(normal,sor,count)



cases = int(input())
for i in range(0, cases):
    n = int(input())
    arr = list(map(int, input().split(" ")))
    x = list(arr.__reversed__())
    if x == sorted(arr) or arr == sorted(arr):
        print("1")
    else:
        print("2")
