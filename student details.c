#include <stdio.h>

struct Student {
    char name[50];
    int sap_id;
    float marks;
};

int main() {
    struct Student students[5];
    int i;


    for (i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); 
        printf("SAP ID: ");
        scanf("%d", &students[i].sap_id);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    
    printf("\n--- Student Details ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("SAP ID: %d\n", students[i].sap_id);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}