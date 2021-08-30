#include <stdio.h>
int main()
{
    int i;
    printf("Enter the Number\n");
    scanf("%d", &i);
    if (i == 1)
    {
        printf("The Number is 1\n");
    }
    else if (i == 2)
    {
        printf("The Number is 2\n");
    }
    else if (i == 3)
    {
        printf("The Number is 3\n");
    }
    else
    {
        printf("The Number is not 1,2 or 3");
    }
    return 0;
}