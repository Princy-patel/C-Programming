#include <stdio.h>
int factorial(int x);

int main()
{
    int a = 5;
    printf("The Value of Factorial %d is %d\n", a, factorial(a));
    return 0;
}

int factorial(int x)
{
    printf("Calling Factorial(%d)\n", x); // Just for Understanding
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        printf("Calling Two time Factorial(%d)\n", x); // Just for Understanding
        return x * factorial(x - 1);
    }
}