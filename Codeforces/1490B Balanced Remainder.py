tc = int(input())
for cs in range(tc):
    n = int(input())
    line = input()
    lst = list(map(int, line.split()))
    rem = [0, 0, 0]
    for i in range(0, n):
        rem[lst[i] % 3] = rem[lst[i] % 3] + 1
    temp = n // 3
    res = 0
    i = 0
    while i < 3:
        if rem[i] > temp:
            res += rem[i] - temp
            rem[(i + 1) % 3] += rem[i] - temp
            rem[i] = temp
            i = -1
        i += 1
    print(res)
