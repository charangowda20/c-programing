#include <stdio.h>

// Call by Value
void swapByValue(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("\nInside Call by Value: a = %d, b = %d\n", a, b);
}

// Call by Reference using pointers
void swapByReference(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    // Call by Value
    printf("Before Call by Value: x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After Call by Value: x = %d, y = %d\n", x, y);

    // Call by Reference
    printf("\nBefore Call by Reference: x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After Call by Reference: x = %d, y = %d\n", x, y);

    return 0;
}
