#include <stdio.h>
int main()
{
    // 😁 1. Find the area of Rectangle
    // int Length = 8, Width = 12; // 🔴 Hard Coded
    // int area = Length * Width;
    // printf("The area of Rectangle is %d", area);

    // int Length, Width; // 🔴 User Input
    // // int area = Length * Width;

    // printf("Enter the Rectangle Length: ");
    // scanf("%d", &Length);
    // printf("Enter the Rectangle Width: ");
    // scanf("%d", &Width);
    // printf("The area of Rectangle is %d", Length * Width);

    // 😁 Find the area of Circle
    // int radius = 3;
    // float pi = 3.14;
    // printf("The Area of Circle is: %f", pi * radius * radius);
    // return 0;

    int principal = 100, rate=4, years = 1;
    int simpleInterest = (principal * rate* years)/100;
    printf("The Value of Interset is %d ", simpleInterest);
    return 0;
}
