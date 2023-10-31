#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Convert the string to uppercase
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] = input[i] - 'a' + 'A';
        }
    }

    printf("Uppercase string: %s\n", input);

    return 0;
}
