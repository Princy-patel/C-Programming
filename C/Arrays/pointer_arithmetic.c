#include<stdio.h>

int main(){
//     // for Int add 4 because in my laptop 4 bytes
//     int i = 34;
//     int *ptr = &i; // Here means my laptop 1 integer = 4 bytes
//     printf("The value of ptr is %u\n", ptr);
//     // ptr++;
//     // ptr++;
//     ptr++;
//     ptr = ptr + 2; // 1 integer = ptr++; ptr++; // 8 bytes add
//     // ptr--;
//     printf("The value of ptr is %u\n", ptr);

    // for Char add 1 because in my laptop 1 bytes
    // char c = '34';
    // char *ptr = &c; // Here means my laptop 1 integer = 4 bytes
    // printf("The value of ptr is %u\n", ptr);
    // // ptr++;
    // // ptr++;
    // ptr++;
    // // ptr = ptr + 2; // 1 integer = ptr++; ptr++; // 8 bytes add
    // // ptr--;
    // printf("The value of ptr is %u\n", ptr);
    // return 0;
    
    // for float add 4 because in my laptop 1 bytes
    float f = 34;
    float *ptr = &f; // Here means my laptop 1 integer = 4 bytes
    printf("The value of ptr is %u\n", ptr);
    // ptr++;
    // ptr++;
    ptr++;
    // ptr = ptr + 2; // 1 integer = ptr++; ptr++; // 8 bytes add
    // ptr--;
    printf("The value of ptr is %u\n", ptr);
    return 0;
}