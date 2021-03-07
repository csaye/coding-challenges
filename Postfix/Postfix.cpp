#include <iostream>
#include <stack>
#include <sstream>

int main()
{
    std::cout << "Enter a postfix expression: ";
    std::string exp;
    getline(std::cin, exp);
    std::istringstream elems(exp);

    std::stack<std::string> stack;
    std::string elem;
    while (elems >> elem)
    {
        try
        {
            int num = stoi(elem);
            stack.push(std::to_string(num));
        }
        catch (...)
        {
            int b = stoi(stack.top());
            stack.pop();
            int a = stoi(stack.top());
            stack.pop();
            if (elem == "+") stack.push(std::to_string(a + b));
            else if (elem == "-") stack.push(std::to_string(a - b));
            else if (elem == "*") stack.push(std::to_string(a * b));
            else if (elem == "/") stack.push(std::to_string(a / b));
        }
    }
    std::cout << stack.top() << "\n";
}
