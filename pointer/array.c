#include <stdio.h>
int main() {

    int arr[3] = {1,2,3};
    int *ptrArr = arr;

    printf("arr = %p \nptrArr = %p \n", arr, ptrArr);
    
    printf("*ptrArr = %d , ptrArr = %p \n", *ptrArr, ptrArr);
    ptrArr++;
    printf("*ptrArr = %d , ptrArr = %p \n", *ptrArr, ptrArr);
    ptrArr++;
    *ptrArr+=5;
    printf("*ptrArr = %d , ptrArr = %p \n", *ptrArr, ptrArr);
    
    for(int i=0; i<sizeof(arr) / sizeof(int); i++) {
        printf("arr[%d] = %d , &arr[%d] = %p\n", i, arr[i], i, &arr[i]);
    }

    --ptrArr;
    --ptrArr;

    // *(++ptrArr) = 50;
    *(ptrArr+1) = 50;
    printf("arr[1] = %d \n", arr[1]);
    printf("ptrArr = %d \n", *ptrArr+1);

    return 0;
}