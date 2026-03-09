#include <stdio.h>

// & reference operator, get the memory address of a variable
// * dereference operator, create a pointer or get the value from a memory address

void change1(int n) {
    n +=1;
    printf("1 increment %d\n", n);
}

void change2(int *n) {
    *n +=1;
    printf("2 increment %d\n", *n);
}

int main(void) {
    int apples = 22; // an int variable

    printf("apples = %d\n", apples); // Outputs the value of apples (22)

    change1(apples); // pass by value
    printf("apples = %d\n", apples); // still 22

    change2(&apples); // pass by reference
    printf("apples = %d\n", apples); // is now 23 

    return 0;
}
