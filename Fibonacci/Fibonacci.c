#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    printf("%i\n", a);
    printf("%i\n", b);
    
    for (int i = 0; i < 10; i++)
    {
        int c = a + b;
        a = b;
        b = c;
        printf("%i\n", c);
    }
}
