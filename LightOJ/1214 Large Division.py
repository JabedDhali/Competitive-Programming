tc = int(input())
for cs in range(1, tc+1):
    line = input()
    num = list(map(int, line.split()))
    if num[0] % num[1] == 0:
        print(f"Case {cs}: divisible")
    else:
        print(f"Case {cs}: not divisible")
