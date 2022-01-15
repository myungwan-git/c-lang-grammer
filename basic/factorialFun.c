#include <stdio.h>

int result = 1;

int factorial(int startNum) {
    if(startNum == 0) {
        return 1;
    }
    result = startNum * factorial(startNum-1);
    return result;
}

int main() {
    int num = 3;
    int result = factorial(num);
    printf("%d factorial result = %d \n", num, result);

    return 0;
}