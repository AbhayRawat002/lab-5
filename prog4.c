#include <stdio.h>
#include <string.h>

int main() {
    char firstString[1000];
    char secondString[1000];

    printf("Enter the first string: ");
    fgets(firstString, sizeof(firstString), stdin);

    printf("Enter the second string: ");
    fgets(secondString, sizeof(secondString), stdin);

    // Remove the newline characters at the end of the input strings
    firstString[strcspn(firstString, "\n")] = '\0';
    secondString[strcspn(secondString, "\n")] = '\0';

    // Concatenate the two strings
    strcat(firstString, secondString);

    printf("Concatenated string: %s\n", firstString);

    return 0;
}
