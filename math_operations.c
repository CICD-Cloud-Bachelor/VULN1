#include <stdio.h>
#include <assert.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

// Unit tests
void run_tests() {
    // Test addition
    assert(add(5, 3) == 8);
    printf("Addition test passed.\n");
    
    // Test subtraction
    assert(subtract(10, 5) == 5);
    printf("Subtraction test passed.\n");
    
    // Test multiplication
    assert(multiply(4, 6) == 24);
    printf("Multiplication test passed.\n");
    
    // Test division
    assert(divide(20, 4) == 5.0);
    printf("Division test passed.\n");

    printf("All tests passed.\n");
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero.\n");
        return -1;
    }
    return (float)a / b;
}

int main() {
    run_tests();
    return 0;
}
