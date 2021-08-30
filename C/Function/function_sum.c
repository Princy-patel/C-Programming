#include <stdio.h>
// Sum is function which takes a and b as an input and return an integer as an output
int sum(int a, int b); // Function Prototype --> It is called Parameters

int main()
{
    int c;
    c = sum(5, 5); // Function call --> Which is called arguments
    printf("The value of sum is %d", c);
    return 0;
}

int sum(int a, int b) // Function Definitiom
{
    int result;
    result = a + b;
    return result;
}