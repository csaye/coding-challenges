#include <stdio.h>

int main()
{
    printf("Enter a string to reverse: ");
    char input[1000], output[1000];
    scanf("%[^\n]%*c", input);
    
    int length = 0, index = 0;
    while (input[length] != '\0') length++;
    while (index < length)
    {
        output[index] = input[length - index - 1];
        index++;
    }
    output[index] = '\0';
    
    printf("%s\n", output);
}
