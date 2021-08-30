#include<stdio.h>
#include<math.h>

int main(){
    int side;
    printf("Enter the Side of Square:\n");
    scanf("%d", &side);
    printf("The Value of area is %f\n", pow(side, 2));
    return 0;
}