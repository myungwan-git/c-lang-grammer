#include <stdio.h>
int main() {
    int num1 = 10, num2 = 20;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    int * ptrArr[] = {ptr1,ptr2};
    printf("ptrArr = %p \n", ptrArr[0]);
    printf("ptrArr = %d \n", *ptrArr[0]);

    int ** dptr = ptrArr;
    printf("dptr = %p \n", dptr);
    printf("dptr = %p \n", *dptr);
    printf("dptr[0] = %d \n", *dptr[0]);


    return 0;
}