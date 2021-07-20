def binary_decimal(binary):
    num = 0
    for char in binary:
        num += num + int(char)
    return num
