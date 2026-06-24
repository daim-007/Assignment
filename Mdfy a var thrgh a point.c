#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;

    *p = 50;

    printf("New value of a = %d\n", a);

    return 0;
}