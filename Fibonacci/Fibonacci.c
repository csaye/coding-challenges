#include <stdio.h>

int main()
{
    int a = -1;
    int b = 1;

    for (int i = 0; i < 10; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        printf("%i\n", c);
    }
}
