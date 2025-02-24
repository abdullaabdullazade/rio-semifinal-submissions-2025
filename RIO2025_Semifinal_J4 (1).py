def can_sort_array(n, arr):
    target = sorted(arr)
    seen = {tuple(arr)}
    q = [(arr, 0)]

    while q:
        curr_arr, moves = q.pop(0)
        if curr_arr == target:
            return True

        for i in range(n - 2):
            new_arr = list(curr_arr)
            new_arr[i], new_arr[i + 1], new_arr[i + 2] = new_arr[i + 2], new_arr[i], new_arr[i + 1]

            arr_tuple = tuple(new_arr)
            if arr_tuple not in seen:
                seen.add(arr_tuple)
                q.append((new_arr, moves + 1))

    return False


t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))

    if can_sort_array(n, arr):
        print("Yes")
    else:
        print("No")