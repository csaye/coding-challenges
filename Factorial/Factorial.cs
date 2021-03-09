using System;

class Factorial
{
    static void Main()
    {
        Console.Write("Enter a positive integer: ");
        string input = Console.ReadLine();
        int n = int.Parse(input);
        int f = 1;

        while (n > 1)
        {
            f *= n;
            n -= 1;
        }
        Console.WriteLine(f);
    }
}
