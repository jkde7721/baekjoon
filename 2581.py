m = int(input()); n = int(input())
prime = [2, 3]
for num in range(5, n + 1, 2):
    i = 0
    while prime[i] * prime[i] <= num:
        if num % prime[i] == 0: break
        i += 1 
    else: prime.append(num)
result = [i for i in prime if i >= m and i <= n]
print(sum(result), result[0], sep='\n') if len(result) else print(-1)
