#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char text[500];

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error creating the file!\n");
        return 1;
    }

    printf("Enter text (type END on a new line to stop):\n");

    
    scanf(" %[^\n]", text);  

    while (1) {
        
        if (strcmp(text, "END") == 0) {
            break;
        }

        fprintf(fp, "%s\n", text);

        
        scanf(" %[^\n]", text);
    }

    fclose(fp);
    printf("Text written to file '%s' successfully.\n", filename);

    return 0;
}