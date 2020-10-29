#include <iostream>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        std::string output = "";

        if (i % 3 == 0) output += "Fizz";
        if (i % 5 == 0) output += "Buzz";

        if (output == "") output = std::to_string(i);

        std::cout << output << "\n";
    }
}
