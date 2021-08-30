#include <stdio.h>
int main()
{
    // 1st Program
    // int a = 10;
    // if (a = 11)
    // {
    //     printf("I am 11\n");
    // }
    // else
    // {
    //     printf("I am not 11\n");
    // }

    // 2nd Program
    // int Physics, Chemistry, Maths;
    // float total;
    // printf("Enter Physics Marks\n");
    // scanf("%d", &Physics);
    // printf("Enter Chemistry Marks\n");
    // scanf("%d", &Chemistry);
    // printf("Enter Maths Marks\n");
    // scanf("%d", &Maths);

    // total = (Physics + Chemistry + Maths) / 3;
    // if (total < 40 || Physics < 33 || Chemistry < 33 || Maths < 33)
    // {
    //     printf("Your Marks is %f and  Sorry!! You are fail\n", total);
    // }
    // else
    // {
    //     printf("Your Marks is %f and Congratulation!! You are pass\n", total);
    // }
    // return 0;

    // 3rd Program
    // float tax = 0, income;
    // printf("Enter Your Income\n");
    // scanf("%f", &income);
    // if (income >= 250000 && income <= 500000)
    // {
    //     tax = tax + 0.05 * (income - 250000);
    // }
    // if (income >= 500000 && income <= 1000000)
    // {
    //     tax = tax + 0.20 * (income - 500000);
    // }
    // if (income >= 1000000)
    // {
    //     tax = tax + 0.30 * (income - 1000000);
    // }
    // printf("Your income to be paid is %f\n", tax);
    // return 0;

    // 5th Program
    //Check Whether Entered Character is Lowercase Letter or Not Without using Library Function.
    char ch;
    printf("Enter Your Character\n");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Your Character is in uppercase Letters\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Your Character is in lowercase Letters\n");
    }
    else
    {
        printf("Non alphabet character\n");
    }
    return 0;
}