import math
m, n = map(int, input().split())
num = [1 for i in range(n + 1)]
num[0] = num[1] = 0; lmt = int(math.sqrt(n))
    
for i in range(2, lmt + 1): 
    if num[i]:
        sum = i + i
        while sum <= n:
            num[sum] = 0
            sum += i
for i in range(m, n + 1):
    if num[i]: print(i) 
