#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses=1;
    srand(time(0));
    // number = rand();
    number = rand() % 100 + 1; // Generate Random number between 1 to 100
    // printf("The Random number is %d\n", number);
    // Keep running the loop until the number is gussed
    do
    {
        printf("Guess the number between 1 to 100:\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number Please!\n");
        }
        else if (guess < number)
        {
            printf("Higher Number Please!\n");
        }
        else
        {
            printf("You are Right!\nYou guessed in the %d attempt.\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}