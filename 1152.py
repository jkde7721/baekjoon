str = input()
str = str.strip() 
space = 0

for s in str:
    if(s == ' '):
        space += 1 

if(len(str) == 0):
    print(0)
else:
    print(space + 1)
