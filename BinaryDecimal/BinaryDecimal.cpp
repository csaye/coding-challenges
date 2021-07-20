#include <iostream>

int binaryDecimal(std::string binary)
{
    int num = 0;
    for (int i = 0; i < binary.length(); i++)
    {
        std::string ch(1, binary[i]);
        num += num + stoi(ch);
    }
    return num;
}
