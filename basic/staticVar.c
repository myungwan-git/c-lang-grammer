#include <stdio.h>

void simpleFunc() {
    static int num1 = 0;
    int num2 = 0;
    num1++, num2++;
    printf("static variable = %d , local variable = %d \n", num1, num2);
}

void staticMaintain() {
    simpleFunc();
}

int main() {

    int i;
    for(i=0; i<3; i++) {
        simpleFunc();
    }

    printf(" >>> staticMaintain() >>> \n");
    staticMaintain();

    return 0;
}