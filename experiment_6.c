#include <stdio.h>

int main()
{
    int a, b, c, largest;
    a = 2;
    b = 3;
    c = 4;
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("The largest number is: %d\n", largest);

    return 0;
}
