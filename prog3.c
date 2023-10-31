#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    int length = strlen(input);

    printf("String in reverse: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }

    printf("\n");

    return 0;
}
