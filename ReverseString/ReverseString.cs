using System;

class ReverseString
{
    static void Main()
    {
        Console.Write("Enter a string to reverse: ");
        string input = Console.ReadLine();
        char[] inputArray = input.ToCharArray();
        Array.Reverse(inputArray);
        string output = new string(inputArray);
        Console.WriteLine(output);
    }
}
