#include <stdio.h>

int main(void) {
    int my_numbers[4] = {25, 50, 75, 100};

    for (int i = 0; i < 4; i++) {
        printf("1 %d %d\n", i, my_numbers[i]);
    }

    for (int i = 0; i < 4; i++) {
        printf("2 %d %p\n", i, &my_numbers[i]);
    }

    int my_int; // Create an int variable
    printf("int %zu\n", sizeof(my_int)); // Get the memory size of an int
    printf("int[4] %zu\n", sizeof(my_numbers)); // Get the size of the my_numbers array
    printf("%p\n", my_numbers); // Get the memory address of the my_numbers array
    printf("%p\n", &my_numbers[0]); // Get the memory address of the first array element
    printf("%d\n", *my_numbers); // Get the value of the first element in my_numbers
    printf("%d\n", *(my_numbers + 1)); // Get the value of the second element in my_numbers
    printf("%d\n", *(my_numbers + 2)); // Get the value of the third element in my_numbers
    my_numbers[0] = 20; // Change the value of the first element to 30
    *(my_numbers + 1) = 30; // Change the value of the second element to 30

    for (int i = 0; i < 4; i++) {
        printf("3 %d %d\n", i, *(my_numbers + i));
    }

    return 0;
}
