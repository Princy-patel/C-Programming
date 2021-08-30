#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
}

int main()
{
    int i = 3, j = 6, sum;
    float avg;
    sumAndAvg(i, j, &sum, &avg);
    printf("The sum is %d\n", sum);
    printf("The avg is %f\n", avg);
    return 0;
}