import math
t = int(input())
for i in range(t):
    x, y = map(int, input().split())
    mx = ti = int(math.sqrt(y - x))
    dis = (y - x) - ((1 + mx) * mx - mx)
    ti += (mx - 1) + int(dis / mx) + (1 if dis % mx else 0) 
    print(ti)
