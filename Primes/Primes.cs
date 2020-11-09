using System;

class Primes
{
    static void Main()
    {
        for (int i = 2; i < 100; i++)
        {
            bool isPrime = true;
            double upperBound = Math.Sqrt(i);

            for (int j = 2; j <= upperBound; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) Console.WriteLine(i);
        }
    }
}
