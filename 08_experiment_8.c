#include <stdio.h>

int main() {
    int x;

    printf("Enter an integer: ");
    scanf("%d", &x);

    printf("Initial value of x: %d\n", x);
    printf("Value using post-increment (x++): %d\n", x++);
    printf("Value of x after post-increment: %d\n", x);
    printf("Value using pre-increment (++x): %d\n", ++x);
    printf("Value of x after pre-increment: %d\n", x);

    return 0;
}

