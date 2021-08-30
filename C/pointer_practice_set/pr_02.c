#include <stdio.h>
void printAdd(int a)
{
    printf("The address of a is %u\n", &a);
}

int main()
{
    int i = 4;
    printf("The value of i is %d\n", i);
    printAdd(i);
    printf("The address of i is %u\n", &i);
    return 0;
}

// Here both the address will not be same because both i have own value and we pass just copy.