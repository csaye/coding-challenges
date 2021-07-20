#include <iostream>

std::string decimalBinary(int num)
{
    std::string binary = "";
    while (num > 0)
    {
        binary = std::to_string(num % 2) + binary;
        num /= 2;
    }
    return binary;
}
