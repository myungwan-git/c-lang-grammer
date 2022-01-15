#include <stdio.h>
int main() {

    int arr1[] = {1,2,3,4,5};
    int arr2[5];
    int arr3[5] = {1};

    printf("arr1 sizeof = %lu \n", sizeof(arr1));
    printf("arr2 sizeof = %lu \n", sizeof(arr2));
    printf("arr3 sizeof = %lu \n", sizeof(arr3));

    int arr1Length = sizeof(arr1) / sizeof(int);
    int arr2Length = sizeof(arr2) / sizeof(int);
    int arr3Length = sizeof(arr3) / sizeof(int);
    printf(" arr1 length = %d \n", arr1Length);
    printf(" arr2 length = %d \n", arr2Length);
    printf(" arr3 length = %d \n", arr3Length);
    

    return 0;
}