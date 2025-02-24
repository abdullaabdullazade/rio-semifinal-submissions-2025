def can_sort(arr):
    n = len(arr)
    target = sorted(arr)

    seen = set()
    seen.add(tuple(arr))

    def try_operations(current):
        if current == target:
            return True

        for i in range(n - 2):
            new_arr = current.copy()
            x, y, z = new_arr[i], new_arr[i + 1], new_arr[i + 2]
            new_arr[i] = z
            new_arr[i + 1] = x
            new_arr[i + 2] = y

            current_tuple = tuple(new_arr)
            if current_tuple not in seen:
                seen.add(current_tuple)
                if try_operations(new_arr):
                    return True

        return False

    return try_operations(arr)


t = int(input())
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    print("Yes" if can_sort(arr) else "No")


