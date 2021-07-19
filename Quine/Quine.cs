using System;

public class Program
{
    public static void Main()
    {
        string s =
        @"
using System;

class Quine
{{
    static void Main()
    {{
        string s =
        @{0}{1}{0};

        Console.WriteLine(s, '{0}', s);
    }}
}}";

        Console.WriteLine(s, '"', s);
    }
}
