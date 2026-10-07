#include <assert.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>

int main() {
    assert(sizeof(char) >= 1);
    assert(sizeof(short) >= 2);
    assert(sizeof(int) >= 2);
    assert(sizeof(long) >= 4);
    assert(sizeof(long long) >= 8);

    assert(sizeof(uint8_t) == 1);
    assert(sizeof(uint16_t) == 2);
    assert(sizeof(uint32_t) == 4);
    assert(sizeof(uint64_t) == 8);
    assert(sizeof(int8_t) == 1);
    assert(sizeof(int16_t) == 2);
    assert(sizeof(int32_t) == 4);
    assert(sizeof(int64_t) == 8);

    printf("size_t: %ld bytes\n", sizeof(size_t));
    printf("ptrdiff_t: %ld bytes\n", sizeof(ptrdiff_t));

    return 0;
}
