#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

struct MallocResult {
    enum Tag { OK, ERROR } tag;
    union Value {
        void* ptr;
        char* error_message;
    } value;
};

static char* MALLOC_RESULT_ERROR = "Cannot allocate memory";

struct MallocResult my_malloc(size_t size) {
    void* ptr = malloc(size);

    if (ptr == NULL) {
        struct MallocResult result = { ERROR, { .error_message = MALLOC_RESULT_ERROR } };
        return result;
    }

    struct MallocResult result = { OK, { .ptr = ptr } };
    return result;
}

int main() {
    struct MallocResult result = my_malloc(8);

    if (result.tag == OK) {
        uint64_t* ptr = result.value.ptr;
        *ptr = 10;

        return 0;
    } else {
        printf("Error: %s\n", result.value.error_message);
        return 1;
    }
}
