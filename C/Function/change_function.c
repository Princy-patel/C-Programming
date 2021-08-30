#include<stdio.h>
void change(int a);

int main(){
    int b = 50;
    printf("The Value of b before change is %d\n", b);
    change(b);
    change(40);
    printf("The Value of b after change is %d\n", b);
    return 0;
}

void change(int a){
    // a = 100;
    printf("The Value for 'a' is %d\n", a);
}