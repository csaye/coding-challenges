a = 0
b = 1
print(a)
print(b)

for i in range(0, 10):
    c = a + b
    a = b
    b = c
    print(c)    
