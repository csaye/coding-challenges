#include <iostream>
#include <algorithm>

std::string reverseString(std::string str)
{
    std::reverse(std::begin(str), std::end(str));
    return str;
}
