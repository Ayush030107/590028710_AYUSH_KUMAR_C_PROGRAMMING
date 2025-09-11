#include <stdio.h>

int main()
{
    int celsius = 200;
    int fahrenheit;

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Temperature in Celsius: %d°C\n", celsius);
    printf("Temperature in Fahrenheit: %d°F\n", fahrenheit);

    return 0;
}
