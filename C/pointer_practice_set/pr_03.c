#include <stdio.h>
void change(int *ptr)
{
    (*ptr)*= 10;
}

int main()
{
    int a;
    printf("Enter the value of a:\n");
    scanf("%d", &a);

    int *ptr;
    ptr = &a;
    printf("The current value of a is %d\n", a);
    change(ptr);
    printf("After changing the value of a is %d\n", *ptr);
    return 0;
}