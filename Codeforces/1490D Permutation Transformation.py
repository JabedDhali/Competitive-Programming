depth = list()


def gen_depth(left, routedepth, right):
    if left > right:
        return 0
    route = left
    for i in range(left, right + 1):
        if arr[route] < arr[i]:
            route = i
    depth[route] = routedepth
    gen_depth(left, routedepth+1, route-1)
    gen_depth(route+1, routedepth+1, right)


tc = int(input())
for cs in range(tc):
    n = int(input())
    x = 0
    line = input()
    arr = list(map(int, line.split()))
    for i in range(n):
        depth.append(0)
    gen_depth(0, 0, n-1)
    for i in range(n):
        print(depth[i], end=" ")
    print("")
