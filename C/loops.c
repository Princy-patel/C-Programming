#include <stdio.h>
int main()
{
    // int a;
    // printf("Enter your Value\n");
    // scanf("%d", &a);
    // while (a < 10)
    // // a = 11; // Infinite Loop
    // // while(a>10)
    // {
    //     printf("%d\n", a);
    //     a++;
    // }

    // Write a program to print natural numbers from 10 to 20 when initial loop counter is intialized to 0.
    // int i = 0;
    // while (i <= 20)
    // {
    //     if (i >= 10)
    //     {
    //         printf("The Value is %d\n", i);
    //     }
    //     i++;
    // }

    // do-while loop = While loop which executes at least once.
    // int i = 1;
    // do
    // {
    //     printf("%d\n", i);
    //     i++;
    // } while (i < 10);

    // for loop
    // for(int a = 1; a<10; a++){
    //     printf("The Value of a is %d\n",a);
    // }

    // Write a program to print reverse Number
    int n;
    printf("Enter the Number\n");
    scanf("%d", &n);

    for (int i = n; i; i--)
    {
        printf("The value of i is  %d\n", i);
    }

    return 0;
}