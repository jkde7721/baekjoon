n = int(input())
m = 2
while n >= m:
    if n % m == 0:
        n /= m
        print(m)
    else:
        m += 1 
