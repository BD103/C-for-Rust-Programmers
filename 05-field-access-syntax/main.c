#include <stdio.h>

struct Foo {
    int field;
};

int main() {
    struct Foo value = { 103 };
    struct Foo* ptr = &value;

    printf("%d\n", value.field);
    printf("%d\n", ptr->field);
}
