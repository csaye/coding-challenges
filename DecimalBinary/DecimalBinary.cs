using System;

class DecimalBinary
{
    static void Main()
    {
        Console.Write("Enter a positive integer: ");
        string input = Console.ReadLine();
        int n = int.Parse(input);
        string b = "";

        while (n > 0)
        {
            b = (n % 2).ToString() + b;
            n /= 2;
        }
        Console.WriteLine(b);
    }
}
