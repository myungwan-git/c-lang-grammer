#include <stdio.h>
int main() {

    double d1 = 1.23e-3;
    double d2 = 1.23e-4;
    double d3 = 1.23e-5;
    double d4 = 1.23e-6;

    // %g는 소수점 6자리가 초과되면 자연스럽게 %e 형태로 출력.
    printf("%g \n", d1);
    printf("%g \n", d2);
    printf("%g \n", d3);
    printf("%g \n", d4);


    return 0;
}