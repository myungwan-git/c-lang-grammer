#include <stdio.h>

int global;

int main() {
    // 전역변수는 초기화 하지 않을 시 0으로 자동 초기화.
    printf("%d \n", global);    

    // 이름이 겹칠경우 전역변수는 묵시되고 지역변수가 새롭게 선언됨.
    // 이런건 하지말자.... 명확하지가 않아.... 
    int global = 10;
    printf("%d \n", global);

    global++;
    printf("%d \n", global);

    return 0;
}