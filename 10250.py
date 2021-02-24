t = int(input())
for i in range(t):
    h, w, n = map(int, input().split())
    rnum = (n % h if n % h else h) * 100 + n / h + (1 if n % h else 0)
    print(int(rnum))
