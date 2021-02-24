n = int(input())
count = 0
for i in range(n):
    wrd = input() 
    for j in range(len(wrd) - 1):
        if wrd[j] != wrd[j + 1]:
            if wrd[j] in wrd[j+2:]:
                break
    else:
        count += 1 
print(count)
