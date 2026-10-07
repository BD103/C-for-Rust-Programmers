#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* reverse(char* forward) {
    // Calculate the string's length, excluding the null terminator.
    unsigned long len = strlen(forward);
    // Allocate enough room for the string and its null terminator.
    char* reversed = malloc(len + 1);

    for (int i = 0; i < len; i++) {
        reversed[i] = forward[len - 1 - i];
    }

    // Add the null terminator at the end.
    reversed[len] = '\0';

    return reversed;
}

int main() {
    char forward[] = "Hello!";
    char* reversed = reverse(forward);

    printf("%s\n", reversed);

    free(reversed);

    return 0;
}
