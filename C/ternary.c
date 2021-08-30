#include <stdio.h>
int main()
{
    int a;
    printf("Enter Your Value: ");
    scanf("%d", &a);
    (a < 5) ? printf("Value is less than 5") : printf("Value is not less than 5");
    return 0;
}