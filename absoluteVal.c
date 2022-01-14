#include <stdio.h>

int returnMaxValue(int,int);
int changeValueOfAbsolute(int);

int main() {

    int num1,num2;
    scanf("%d %d", &num1, &num2);
    printf("절대값이 더 큰 값 = %d \n", returnMaxValue(num1,num2));

    return 0;
}

int returnMaxValue(int num1, int num2) {
    if(changeValueOfAbsolute(num1) > changeValueOfAbsolute(num2)) {
        return num1;
    } else {
        return num2;
    }
}

int changeValueOfAbsolute(int num) {
    return num < 0 ? num*=-1 : num;
}