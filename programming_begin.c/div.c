#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0 && number % 3 == 0)
    {
        printf("%d is divisible by 6.\n", number);
    }
    else
    {
        printf("%d is not divisible by 6.\n", number);
    }

    return 0;
}
