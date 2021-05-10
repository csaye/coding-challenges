#include <math.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
    for (int i = 2; i < 100; i++)
    {
        bool isPrime = true;
        int upperBound = sqrt(i);

        for (int j = 2; j <= upperBound; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime) printf("%i\n", i);
    }
}
