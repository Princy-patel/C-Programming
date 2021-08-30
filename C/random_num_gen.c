#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    srand(time(0));
    // number = rand();
    number = rand() % 100 + 1; // Generate Random number between 1 to 100
    printf("The Random number is %d\n", number);
    return 0;
}