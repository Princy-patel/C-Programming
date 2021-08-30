#include <stdio.h>

int main()
{
    int a[] = {25, 50, 75};
    printf("The value of a[0] is %d\n", a[0]);
    printf("The value of a[1] is %d\n", a[1]);
    printf("The value of a[2] is %d\n\n", a[2]);

    float b[] = {25.22, 50.56, 75.58};
    printf("The value of b[0] is %.2f\n", b[0]); // With 0.2 it is indicate that    print only 2 digit after "."
    printf("The value of b[1] is %f\n", b[1]); // Without 0.2
    printf("The value of b[2] is %f\n", b[2]);
    return 0;
}