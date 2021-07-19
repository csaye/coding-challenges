def binary_decimal(binary):
    total = 0
    for char in binary:
        total += total + int(char)
    return total
