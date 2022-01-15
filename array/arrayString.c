#include <stdio.h>
int main() {

    char arr[] = "Hello C lang";
    printf("arr length = %ld \n", sizeof(arr) / sizeof(char));

    for(int i=0; i<sizeof(arr)/sizeof(char); i++) {
        printf("arr[%d] = %c \n", i, arr[i]);
    }

    if(arr[12] == '\0') {
        printf("null : %d \n", arr[12]);
    }

    return 0;
}