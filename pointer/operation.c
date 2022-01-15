#include <stdio.h>
int main() {

    int num1 = 10, num2 = 20;
    int * pnum1, * pnum2;
    printf("pnum1 = %p \npnum2 = %p \n", pnum1, pnum2);
    pnum1 = &num1;
    pnum2 = &num2;
    printf("pnum1 = %p \npnum2 = %p \n", pnum1, pnum2);

    printf("*pnum1 = %d \n", *pnum1);
    printf("*pnum2 = %d \n", *pnum2);

    int ** pnum0 = &pnum1;
    printf("pnum0 = %p \npnum1 = %p \n", pnum0, pnum1);
    printf("*pnum0 = %d \n", **pnum0);

    **pnum0 += 5;
    printf("*pnum1 = %d \n", *pnum1);

    return 0;
}