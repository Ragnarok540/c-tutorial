#include <stdio.h>

// & reference operator, get the memory address of a variable
// * dereference operator, create a pointer or get the value from a memory address

int main(void) {
    int apples = 22; // an int variable
    printf("%d\n", apples); // Outputs the value of apples (22)
    printf("%p\n", &apples); // Outputs the memory address of apples
    int *ptr = &apples; // A pointer variable, with the name ptr, that stores the address of apples
    printf("%p\n", ptr); // Output the memory address of apples with the pointer
    printf("%d\n", *ptr); // Dereference: Output the value of apples with the pointer

    return 0;
}
