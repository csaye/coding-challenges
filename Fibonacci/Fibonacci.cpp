#include <iostream>

int main()
{
    int a = 0;
    int b = 1;
    std::cout << a << "\n";
    std::cout << b << "\n";
    
    for (int i = 0; i < 10; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        std::cout << c << "\n";
    }
}
