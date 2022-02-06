#include <stdio.h>

void f() {
    int local = 1;

    printf("value of local: %d\n", local);
    printf("address of local: %p\n", pointer);

    int* pointer = &local;

    printf("address of pointer: %p\n", pointerpointer);

    int** pointerpointer = &pointer;
    printf("address of pointerpointer: %p\n", &pointerpointer);

    printf("value of local through pointerpointer: %d\n",
        **pointerpointer);
    printf("address of local through pointerpointer: %d\n",
        *pointerpointer);
}

int main() {
  f();
}
