#include <stdio.h>

int main()
{
    int length = 10;
    int width = 20;
    int area = length * width;
    printf("Area: %d\n", area);
    int perimeter = 2 * (length + width);
    printf("Perimeter: %d\n", perimeter);
    return 0;
}
