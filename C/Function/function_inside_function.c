#include<stdio.h>
void good_morning();
void good_afternoon();
void good_night();

int main(){
    printf("Here Some messages for you!!\n");
    good_morning();
    printf("Thank You!!\n");
    return 0;
}

void good_morning(){
    printf("Good Morning\n");
    good_afternoon();
}
void good_afternoon(){
    printf("Good Afternoon\n");
    good_night();
}
void good_night(){
    printf("Good Night\n");
}
