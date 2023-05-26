#include <stdio.h>

int main()
{
    // Creating uppercase alphabet
    printf("Uppercase Alphabet:\n");
    for (char c = 'A'; c <= 'Z'; c++)
    {
        printf("%c ", c);
    }
    printf("\n\n");

    // Creating lowercase alphabet
    printf("Lowercase Alphabet:\n");
    for (char c = 'a'; c <= 'z'; c++)
    {
        printf("%c ", c);
    }
    printf("\n");

    return 0;
}
