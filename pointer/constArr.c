#include <stdio.h>
int main() {
    
    char * str = "Hello C lang";
    char * str2 = str;
    printf("str2 = %p \n", str2);
    printf("str = %p \n", str);
    printf("*str = %c \n", *str);

    str = "Wait C++";
    printf("str = %p \n", str);
    printf("*str = %c \n", *str);

    str = str2;
    // str이 가르키고 있는 값을 변경하기 전 (실제로는 변경이 아니라 새로운 주소에 심는것으로 보임)의 값으로 되돌린다.
    // 상수형태의 문자열이기 때문에 변경이 불가능하다.
    printf("str = %p \n", str);
    printf("*str = %c \n", *str);

    int num = 10;
    int * ptr = &num;
    printf("ptr = %p \n", ptr);
    *ptr = 20;
    printf("ptr = %p \n", ptr);

    

    return 0;
}