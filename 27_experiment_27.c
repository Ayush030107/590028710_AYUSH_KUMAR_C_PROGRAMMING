#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    printf("Enter an integer: ");
    scanf("%d", &data.i);

    printf("\nAfter assigning data.i:\n");
    printf("data.i   = %d\n", data.i);
    printf("data.f   = %f\n", data.f);
    printf("data.str = %s\n\n", data.str);

    printf("Enter a float: ");
    scanf("%f", &data.f);

    printf("\nAfter assigning data.f:\n");
    printf("data.i   = %d\n", data.i);
    printf("data.f   = %f\n", data.f);
    printf("data.str = %s\n\n", data.str);

    printf("Enter a string: ");
    scanf("%s", data.str);

    printf("\nAfter assigning data.str:\n");
    printf("data.i   = %d\n", data.i);
    printf("data.f   = %f\n", data.f);
    printf("data.str = %s\n", data.str);

    return 0;
}