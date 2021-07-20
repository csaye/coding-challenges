using System;

public class Program
{
    public static string ReverseString(string str)
    {
        char[] arr = str.ToCharArray();
        Array.Reverse(arr);
        string rev = new string(arr);
        return rev;
    }
}
