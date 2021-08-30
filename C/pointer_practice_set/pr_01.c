#include <stdio.h>
int main()
{
    int a = 5;
    int *ptr;
    ptr = &a;
    printf("The value of a is %d\n", a);
    printf("The address of a is %u\n", ptr);
    printf("The value of a is %d\n", *ptr);
}