def maximize_score(arr):
    n = len(arr)
    dp_max = [float('-inf')] * n
    dp_min = [float('inf')] * n

    dp_max[0] = arr[0]
    dp_min[0] = arr[0]

    for i in range(1, n):
        dp_max[i] = max(arr[i], arr[i] * dp_max[i - 1], arr[i] * dp_min[i - 1])
        dp_min[i] = min(arr[i], arr[i] * dp_max[i - 1], arr[i] * dp_min[i - 1])

    return max(dp_max)


T = int(input())

for _ in range(T):
    N = int(input())
    a = list(map(int, input().split()))
    print(maximize_score(a))