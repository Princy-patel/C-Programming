//Check whether number is even or odd
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the Number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }
    return 0;
}