#include <stdio.h>

struct Student {
    char name[50];
    int sap_id;
    float marks;
};

int main() {
    struct Student students[5];
    int i;

    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Enter SAP ID: ");
        scanf("%d", &students[i].sap_id);
        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("SAP ID: %d\n", students[i].sap_id);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
