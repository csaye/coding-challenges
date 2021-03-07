n = int(input('Enter a positive integer: '))
f = 1

while n > 1:
    f *= n
    n -= 1
print(f)
