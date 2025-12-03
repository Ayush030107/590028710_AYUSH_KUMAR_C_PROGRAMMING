#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char text[1000];
    FILE *file;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to append (type STOP to finish):\n");

    getchar();

    while (1) {
        fgets(text, sizeof(text), stdin);

        text[strcspn(text, "\n")] = '\0';

        if (strcmp(text, "STOP") == 0)
            break;

        fprintf(file, "%s\n", text);
    }

    fclose(file);
    printf("Text appended successfully!\n");

    return 0;
}