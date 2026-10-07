#include <stdio.h>

int main() {
    int array[] = { 0, 1, 2, 3, 4, 5 };

    for (int* x = &array[0]; x < &array[6]; x++) {
        *x = 5 - *x;
    }

    for (int i = 0; i < 6; i++) {
        printf("%d", array[i]);
    }

    return 0;
}
