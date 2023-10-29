match = 0
for i in range (0,1000000):
    x = str(i)
    count = 0
    for j in x:
        count+=int(j)
    if count == 12:
        match += 1
        
print(match)