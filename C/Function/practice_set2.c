#include <stdio.h>
float force(float mass);
int main()
{
    float m;
    printf("Enter the Value of mass:\n");
    scanf("%f", &m);
    printf("The Value of force in Newton is %.2f\n", force(m));
    return 0;
}

float force(float mass)
{
    float result;
    result = mass * 9.8;
    return result;
}
