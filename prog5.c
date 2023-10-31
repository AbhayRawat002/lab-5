#include <stdio.h>
#include <string.h>

int main() {
    char sourceString[1000];
    char destinationString[1000];

    printf("Enter the source string: ");
    fgets(sourceString, sizeof(sourceString), stdin);

    // Remove the newline character at the end of the source string
    sourceString[strcspn(sourceString, "\n")] = '\0';

    // Copy the source string to the destination string
    strcpy(destinationString, sourceString);

    printf("Source string: %s\n", sourceString);
    printf("Copied string: %s\n", destinationString);

    return 0;
}
