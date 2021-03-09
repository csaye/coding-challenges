#include <iostream>

int main()
{
    std::cout << "Enter a binary number: ";
    std::string b;
    getline(std::cin, b);
    int n = 0;

    for (int i = 0; i < b.length(); i++)
    {
        std::string c(1, b[i]);
        n += n + stoi(c);
    }
    std::cout << n << "\n";
}
