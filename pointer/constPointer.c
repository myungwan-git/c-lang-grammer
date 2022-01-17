#include <stdio.h>
int main() {

    int num = 10;
    int num2 = 5;
    int * ptr = &num;
    printf("ptr = %p \n", ptr);

    *ptr = 20;
    printf("ptr = %p \n", ptr);
    printf("result num = %d \n", num);

    // conPtr이 가르키는 변수의 값을 상수로 정의
    const int * conPtr = &num;
    printf("*conPtr = %d \n", *conPtr);
    printf("conPtr = %p \n", conPtr);
    // *conPtr = 30;
    conPtr = &num2;
    printf("*conPtr = %d \n", *conPtr);
    printf("conPtr = %p \n", conPtr);

    // conPtr2의 주소값을 상수로 정의 (다시말해, conPtr2를 상수로 정의한다.)
    int * const conPtr2 = &num;
    printf("*conPtr2 = %d \n", *conPtr2);
    printf("conPtr2 = %p \n ", conPtr2);
    *conPtr2 = 50;
    // conPtr2 = &num2;
    printf("*conPtr2 = %d \n", *conPtr2);
    printf("conPtr2 = %p \n ", conPtr2);

    return 0;
}