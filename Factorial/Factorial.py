def factorial(num):
    fac = 1
    while num > 1:
        fac *= num
        num -= 1
    return fac
