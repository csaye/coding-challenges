using System;
using System.Collections.Generic;

public class Program
{
    public static void Main()
    {
        Console.Write("Enter a postfix expression: ");
        string exp = Console.ReadLine();
        string[] elems = exp.Split();

        Stack<string> stack = new Stack<string>();
        foreach (String elem in elems)
        {
            try
            {
                int num = int.Parse(elem);
                stack.Push(num.ToString());
            }
            catch
            {
                int b = int.Parse(stack.Pop());
                int a = int.Parse(stack.Pop());
                if (elem == "+") stack.Push((a + b).ToString());
                else if (elem == "-") stack.Push((a - b).ToString());
                else if (elem == "*") stack.Push((a * b).ToString());
                else if (elem == "/") stack.Push((a / b).ToString());
            }
        }
        Console.Write(stack.Peek());
    }
}
