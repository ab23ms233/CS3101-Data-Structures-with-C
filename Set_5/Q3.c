// QUESTION

// Write two functions: i) INCVAL() – that takes the value of an integer as an argument and returns its incremented value, and ii) INCREF() – that takes the address of an integer as an argument and increments its value. Call these functions from main() to increment two local variables in main() – one using the first function and the other using the second one, and then print the incremented values of these two local variables in main().

#include <stdio.h>

int INCVAL(int num)
{
    return num + 1;
}

int INCREF(int *ptr)
{
    return (*ptr) + 1;
}

void main()
{
    int num_1 = 8;
    int num_2 = 9;

    int num_1_inc = INCVAL(num_1);
    int num_2_inc = INCREF(&num_2);

    printf("INCVAL incremented value: %d\n", num_1_inc);
    printf("INCREF incremented value: %d\n", num_2_inc);
}