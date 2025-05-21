#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    if (y == 0) {
        printf("Error: Cannot divide by zero\n");
        return 0;
    }
    return x / y;
}

int increment(int x) {
    return x + 1;
}

int main() {
    int a = 10, b = 5;

    printf("Add: %d\n", add(a, b));
    printf("Subtract: %d\n", subtract(a, b));
    printf("Multiply: %d\n", multiply(a, b));
    printf("Divide: %d\n", divide(a, b));
    printf("Increment a: %d\n", increment(a));

    return 0;
}
