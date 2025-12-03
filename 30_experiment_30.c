#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *file;
    char ch;

    printf("Enter the filename: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: Could not open the file %s\n", filename);
        return 1;
    }

    printf("\n--- File Contents ---\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);

    return 0;
}