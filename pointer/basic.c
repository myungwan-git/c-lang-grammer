#include <stdio.h>
int main() {
    int num = 7;
    int * pnum = &num;

    printf("&num = %p \n", &num);
    printf("pnum = %p \n", pnum);

    printf("pnum length = %lu \n", sizeof(pnum));

    return 0;
}