def solve():
    n = int(input())
    a = list(map(int, input().split()))

    if n <= 2:
        print("Yes")
        return

    def check_sorted(arr):
        for i in range(len(arr) - 1):
            if arr[i] > arr[i + 1]:
                return False
        return True

    def generate_permutations(arr):
        import itertools
        return list(itertools.permutations(arr))

    def apply_operation(arr, i):
        x = arr[i]
        y = arr[i + 1]
        z = arr[i + 2]
        arr[i] = z
        arr[i + 1] = x
        arr[i + 2] = y
        return arr

    if check_sorted(a):
        print("Yes")
        return

    import copy

    q = [(copy.deepcopy(a), [])]
    visited = {tuple(a)}

    while q:
        curr_arr, operations = q.pop(0)

        if check_sorted(curr_arr):
            print("Yes")
            return

        for i in range(len(curr_arr) - 2):
            next_arr = apply_operation(copy.deepcopy(curr_arr), i)

            if tuple(next_arr) not in visited:
                visited.add(tuple(next_arr))
                q.append((next_arr, operations + [i]))

    print("No")


t = int(input())
for _ in range(t):
    solve()