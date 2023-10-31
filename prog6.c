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

    // Compare the two strings
    int result = strcmp(firstString, secondString);

    if (result == 0) {
        printf("The two strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically smaller than the second string.\n");
    } else {
        printf("The first string is lexicographically larger than the second string.\n");
    }

    return 0;
}
