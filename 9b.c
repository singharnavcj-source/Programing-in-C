#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("myfile.txt", "r");   // open file for reading
    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("File content:\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);  // print each character
    }

    fclose(fp);
    return 0;
}