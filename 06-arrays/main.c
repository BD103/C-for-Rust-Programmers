#include <assert.h>
#include <stdio.h>

void function(char declared_size[3], char inferred_size[]) {
    printf("Declared size (function): %ld bytes\n", sizeof(declared_size));
    printf("Inferred size (function): %ld bytes\n", sizeof(inferred_size));
}

int main() {
    char declared_size[3] = { 1, 2, 3 };
    char inferred_size[] = { 4, 5, 6 };

    printf("Declared size (main): %ld bytes\n", sizeof(declared_size));
    printf("Inferred size (main): %ld bytes\n", sizeof(inferred_size));

    function(declared_size, inferred_size);

    return 0;
}
