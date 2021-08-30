#include <stdio.h>
int main()
{
    // write a program to print multiplication table of a given number n in c
    // int n, i;
    // printf("Enter an integer: ");
    // scanf("%d", &n);
    // for (i = 1; i <= 10; ++i)
    // {
    //     printf("%d * %d = %d \n", n, i, n * i);
    // }

    // write a program to print multiplication table of 10 in reverse Order.
    // for (int i = 10; i; i--)
    // {
    //     printf("10 * %d = %d\n", i, 10 * i);
    // }
    // return 0;

    //  write a program to sum first ten natural numbers using while loop.
    // int i, sum=0, n=10;
    // for(i=0; i<=n; i++){
    //     sum = sum  + i;
    // }
    // printf("The Value os sum(1 to 10) is %d\n", sum);

    // Using While loop
    // int i = 1, sum = 0;
    // while(i<=10){
    //     sum  = sum  + i;
    //     i++;
    // }
    // printf("The Value os sum(1 to 10) is %d\n", sum);

    // Using do-while loop
    // int i = 1, sum = 0;
    // do
    // {
    //     sum = sum + i;
    //     i++;
    // } while (i <= 10);
    // printf("The Value os sum(1 to 10) is %d\n", sum);

    // write a program to calculate the factorial of a given number using for loop
    // int i, n, factorial = 1;
    // printf("Enter Your Value\n");
    // scanf("%d\n", &n);
    // for(i=1;i<=n;i++){
    //     factorial = factorial * i;
    // }
    // printf("The factorial of %d is %d\n", n, factorial);

    //  write a program to check whether the given number is prime or not
    int n = 5, prime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("This is not a prime number");
    }
    else
    {
        printf("This is a prime number");
    }
    return 0;
}