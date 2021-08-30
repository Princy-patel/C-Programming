#include<stdio.h>
void good_morning();
void good_afternoon();
void good_night();

int main(){
    printf("Here Some messages for you!!\n");
    good_morning();
    good_afternoon();
    good_night();
    printf("Thank You!!\n");
    return 0;
}

void good_morning(){
    printf("Good Morning\n");
}
void good_afternoon(){
    printf("Good Afternoon\n");
}
void good_night(){
    printf("Good Night\n");
}
