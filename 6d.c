#include <stdio.h>
#include <string.h>

void reverse(char *str) {
    int left = 0;
    int right;
    char temp;

    if (str == NULL) {
        return;
    }

    right = strlen(str) - 1;

    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        
        left++;
        right--;
    }
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    scanf("%999s", str);

    printf("Original string: %s\n", str);

    reverse(str);

    printf("Reversed string: %s\n", str);

    return 0;
}