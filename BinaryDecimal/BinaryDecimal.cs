using System;

class BinaryDecimal
{
    static void Main()
    {
        Console.Write("Enter a binary number: ");
        string b = Console.ReadLine();
        int n = 0;

        foreach (char c in b)
        {
            n += n + (int)char.GetNumericValue(c);
        }
        Console.WriteLine(n);
    }
}
