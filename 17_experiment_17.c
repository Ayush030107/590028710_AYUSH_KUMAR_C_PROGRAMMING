#include <stdio.h>

int main()
{
    int num, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        while (num > 1)
        {
            factorial *= num;
            num--;
        }

        printf("Factorial is: %d\n", factorial);
    }

    return 0;
}
