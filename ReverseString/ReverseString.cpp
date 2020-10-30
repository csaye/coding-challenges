#include <iostream>
#include <algorithm>

int main()
{
    std::cout << "Enter a string to reverse: ";
    std::string input;
    getline(std::cin, input);
    std::reverse(std::begin(input), std::end(input));
    std::cout << input << "\n";
}
