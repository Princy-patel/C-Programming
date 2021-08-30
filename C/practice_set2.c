#include <stdio.h>
int main()
{
    // int a = 4;
    // int b = a;
    // printf("The Value of b is %d ", b);
    // return 0;

    // Check Whether the number is divisible by 97 or not?
    int num;
    printf("Enter The Number\n");
    scanf("%d", &num);
    printf("Divisiblity test returns: %d\n", num % 97); //If returns 0 then number divided by 97 else not
    return 0;
}