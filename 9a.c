#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[1000];

    printf("Enter the name of the file to create: ");
    scanf("%s", filename);

    fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("Error! Could not create file.\n");
        exit(1);
    }

    getchar();

    printf("Enter text to write into the file:\n");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File '%s' created and text written successfully.\n", filename);

    return 0;
}
