#include<stdio.h>
void display(); // Function Prototype

int main(){
    int a;
    printf("Initializing display Function\n");
    display(); // Function call
    printf("Display Function finished then its works\n");
    return 0;
}

void display(){
    printf("This is Display\n");
}