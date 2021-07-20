def decimal_binary(num):
    binary = ''
    while num > 0:
        binary = str(num % 2) + binary
        num //= 2
    return binary
