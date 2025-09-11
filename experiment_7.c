#include <stdio.h>

int main()
{
    int num = 5;

    (num & 1) ? printf("%d is odd.\n", num) : printf("%d is even.\n", num);

    return 0;
}
