#include <stdio.h>

// Booleans are not a language primitive, they're defined in a header added in C99.
#include <stdbool.h>

int main() {
    bool yes = true;
    bool no = false;

    printf("Yes: %d\n", yes);
    printf("No: %d\n", no);

    if (yes && no) {
        printf("Uh oh, something went wrong :(\n");
    }

    return 0;
}
