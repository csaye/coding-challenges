import math

for i in range(2, 100):
    isPrime = True
    upperBound = int(math.sqrt(i))

    for j in range(2, upperBound + 1):
        if (i % j == 0):
            isPrime = False
            break
    
    if (isPrime):
        print(i)
