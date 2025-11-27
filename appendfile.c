#include <stdio.h>
#include <string.h>

int main() {
    char filename[100];
    char text[500];

    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE *fp = fopen(filename, "a");   
    if (fp == NULL) {
        printf("Error: Could not open the file!\n");
        return 1;
    }

    printf("Enter text to append (type STOP on a new line to finish):\n");

    
    scanf("%*c");

    while (1) {
        fgets(text, sizeof(text), stdin);

        
        text[strcspn(text, "\n")] = '\0';

        if (strcmp(text, "STOP") == 0) {
            break;
        }

        fprintf(fp, "%s\n", text);  
    }

    fclose(fp);
    printf("Text appended successfully to '%s'.\n", filename);

    return 0;
}