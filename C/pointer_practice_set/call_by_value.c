#include<stdio.h>
int sum(int a, int b);

int main(){
    int a = 4, b=5;
    printf("The value of a ad b is %d and %d\n", a, b);
    printf("The sum is %d\n", sum(a,b));
    printf("The value of a ad b after function call is %d and %d\n", a, b);
    return 0;
}

int sum(int a, int b){
    int c;
    c = a + b;
    a = 50; // No Meaning beause we can't change the value of a and b here without using variable.
    b = 45; // No Meaning beause we can't change the value of a and b here without using variable.
    return c;
}