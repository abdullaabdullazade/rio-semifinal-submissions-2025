def check_sort_possibility(n, arr):
    sorted_arr = sorted(arr)
    used = set()
    current = tuple(arr)
    queue = [current]
    used.add(current)

    while queue:
        current = list(queue.pop(0))
        if current == sorted_arr:
            return True

        for i in range(n - 2):
            new_arr = current.copy()
            new_arr[i], new_arr[i + 1], new_arr[i + 2] = new_arr[i + 2], new_arr[i], new_arr[i + 1]

            new_tuple = tuple(new_arr)
            if new_tuple not in used:
                used.add(new_tuple)
                queue.append(new_tuple)

    return False


t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    print("Yes" if check_sort_possibility(n, arr) else "No")