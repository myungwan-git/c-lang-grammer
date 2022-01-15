#include <stdio.h>

int add(int num1, int num2);
void printfFunc();

int main() {
    int result = add(1,2);
    printf("result = %d \n", result);
    printfFunc();

    return 0;
}

int add(int num1, int num2) {
    int result = num1 + num2;

    return result;
}

void printfFunc() {
    printf("printfFunc() call . \n");
}