#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[100];
    char text[1000];

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text (type END on a new line to stop):\n");
    getchar();

    while (1) {
        fgets(text, sizeof(text), stdin);
        text[strcspn(text, "\n")] = '\0';

        if (strcasecmp(text, "END") == 0) {
            break;
        }

        fprintf(file, "%s\n", text);
    }

    fclose(file);
    printf("Text has been written to '%s'.\n", filename);

    return 0;
}