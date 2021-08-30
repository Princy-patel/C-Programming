#include <stdio.h>

// void printArray(int *ptr, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of %d is %d\n", i + 1, *(ptr + i));
//     }
// }

void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("he value of %d is %d\n", i + 1, ptr[i]);
    }
    ptr[2] = 5555; // This value will be change in arr array of main as well 
}

int main()
{
    int arr[] = {12, 58, 95, 58, 45, 38, 89, 465};
    printArray(arr, 8);
    printf("%d", arr[2]);
    return 0;
}