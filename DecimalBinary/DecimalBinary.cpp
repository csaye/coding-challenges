#include <iostream>

int main()
{
    std::cout << "Enter a positive integer: ";
    std::string input;
    getline(std::cin, input);
    int n = stoi(input);
    std::string b = "";

    while (n > 0)
    {
        b = std::to_string(n % 2) + b;
        n /= 2;
    }
    std::cout << b << "\n";
}
