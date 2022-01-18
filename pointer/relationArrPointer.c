#include <stdio.h>
int main() {

    int num1=10,num2=20;
    int arr[][2] = {1,2,3,4};

    int * pointerArr[2] = {&num1, &num2};
    int (*arrPointer)[2] = arr;

    printf("%d %d \n", *pointerArr[0], *pointerArr[1]);
    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {
            printf("%d  ",arrPointer[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}