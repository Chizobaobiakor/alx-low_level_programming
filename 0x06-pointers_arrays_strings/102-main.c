#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function demonstrates the assignment of a value to `a[2]`
 * using pointer arithmetic without directly accessing the `a` array.
 * It modifies the value at the memory location pointed to by `p` to 98,
 * which indirectly changes the value of `a[2]`.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;

    *(p + 3) = 98;

    printf("a[2] = %d\n", a[2]);
    return 0;
}
