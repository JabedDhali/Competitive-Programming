tc = int(input())
a = set()
for i in range(1, 10001):
    a.add(i**3)
for cs in range(tc):
    n = int(input())
    res = 0
    for iii in a:
        if n-iii in a:
            res = 1
            break
    if res == 0:
        print("NO")
    else:
        print("YES")
