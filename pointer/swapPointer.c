#include <stdio.h>

void swap(int ** ptr1, int ** ptr2) {
    
    int * temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {

    int num1 = 1, num2 = 2;
    int * ptr1 = &num1;
    int * ptr2 = &num2;
    printf("*ptr1 = %d , *ptr2 = %d \n", *ptr1, *ptr2);

    swap(&ptr1,&ptr2);
    printf("*ptr1 = %d , *ptr2 = %d \n", *ptr1, *ptr2);

    return 0;
}