#include <iostream>

int main()
{
    std::cout << "Enter a positive integer: ";
    std::string input;
    getline(std::cin, input);
    int n = stoi(input);
    int f = 1;

    while (n > 1)
    {
        f *= n;
        n--;
    }
    std::cout << f << "\n";
}
