#include <stdio.h>

int main() {
    char filename[100];
    char line[500];

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    printf("\n--- File Contents ---\n");

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);   
    }

    fclose(fp);

    printf("\n--- End of File ---\n");

    return 0;
}