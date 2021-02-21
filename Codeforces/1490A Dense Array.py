tc = int(input())
lst = []
for cs in range(0, tc):
    res = 0
    n = int(input())
    line = input()
    num = list(map(int, line.split()))
    for i in range(1, n):
        x = min(num[i-1], num[i])
        y = max(num[i-1], num[i])
        while x*2 < y:
            x *= 2
            res = res + 1
    print(f"{res}")
