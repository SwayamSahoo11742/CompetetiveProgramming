from math import sqrt

T = int(input())
while T > 0:
    T -= 1
    n, c = map(int, input().strip().split())
    s = list(map(int, input().strip().split()))
    A = 0
    B = 0
    C = 0
    for i in range(n):
        C += s[i] * s[i]
        B += s[i] * 2
        A += 1
    C -= c
    dis = B * B - 4 * A * C
    r1 = (-B + sqrt(dis)) // (2 * A)
    r2 = (-B - sqrt(dis)) // (2 * A)
    print(int(max(r1, r2) // 2))
