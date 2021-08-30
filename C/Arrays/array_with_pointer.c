#include <stdio.h>

int main()
{
    int marks[4];
    int *ptr;
    ptr = &marks[0];
    // ptr = marks // Here, We can simple write marks rather than &marks[0]
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of student of %d\n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("The marks of student of %d is %d\n", i + 1, marks[i]);
    }
    return 0;
}