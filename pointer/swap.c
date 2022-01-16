#include <stdio.h>

void swapTwoNum(int param[]) {
    int temp = param[0];
    param[0] = param[1];
    param[1] = temp;
}

void swapTwoNum2(int param[]) {
    int temp = *(param);
    *(param) = *(param+1);
    *(param+1) = temp;
}

int main() {
    int arr[2] = {1,50};
    swapTwoNum2(arr);

    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }

    return 0;
}