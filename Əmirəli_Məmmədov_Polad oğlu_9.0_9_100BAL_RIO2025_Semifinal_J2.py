MOD = 10**9 + 7

def count_arrangements(n, boxes, toys):
    boxes.sort()
    toys.sort()

    result = 1
    i = n - 1
    j = n - 1

    while i >= 0:
        while j >= 0 and boxes[j] >= toys[i]:
            j -= 1

        valid_boxes = n - 1 - j - (n - 1 - i)
        if valid_boxes <= 0:
            return 0

        result = (result * valid_boxes) % MOD
        i -= 1

    return result

def main():
    import sys
    input = sys.stdin.read
    data = input().split()
    index = 0
    t = int(data[index])
    index += 1

    results = []
    for _ in range(t):
        n = int(data[index])
        index += 1
        boxes = list(map(int, data[index:index + n]))
        index += n
        toys = list(map(int, data[index:index + n]))
        index += n

        result = count_arrangements(n, boxes, toys)
        results.append(result)

    sys.stdout.write("\n".join(map(str, results)) + "\n")

if __name__ == "__main__":
    main()
