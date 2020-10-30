#include <iostream>

int main()
{
    char q = 34;
    std::string program[] =
    {
"#include <iostream>",
"",
"int main()",
"{",
"    char q = 34;",
"    std::string program[] =",
"    {",
"    };",
"",
"    for (int i = 0; i < 7; i++) std::cout << program[i] << std::endl;",
"    for (int i = 0; i < 13; i++) std::cout << q << program[i] << q << ',' << std::endl;",
"    for (int i = 7; i < 13; i++) std::cout << program[i] << std::endl;",
"}",
    };

    for (int i = 0; i < 7; i++) std::cout << program[i] << std::endl;
    for (int i = 0; i < 13; i++) std::cout << q << program[i] << q << ',' << std::endl;
    for (int i = 7; i < 13; i++) std::cout << program[i] << std::endl;
}
