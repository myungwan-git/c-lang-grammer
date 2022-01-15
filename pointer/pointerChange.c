#include <stdio.h>
int main() {
    int num1 = 10, num2 = 20;
    int * ptr1 = &num1;
    int * ptr2 = &num2;

    *ptr1 += 10;
    *ptr2 -= 10;
    printf("num1(20) = %d \n", num1);
    printf("num2(10) = %d \n", num2);

    ptr1 = &num2;
    ptr2 = &num1;
    printf("*ptr1(10) = %d \n", *ptr1);
    printf("*ptr2(20) = %d \n", *ptr2);
    


    return 0;
}