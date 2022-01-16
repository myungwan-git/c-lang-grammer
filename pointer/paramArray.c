#include <stdio.h>

void plusArray(int * param) {
    *(param) += 10;
    printf("param = %d \n", *param);
    *(param+1) += 10;
    printf("param = %d \n", *(param+1));
    *(param+2) += 10;
    printf("param = %d \n", *(param+2));
}

int main() {
    int arr[3] = {1,2,3};
    plusArray(arr);
    
    for(int i=0; i<3; i++) {
        printf("main arr[%d] = %d \n", i, arr[i]);    
    }
    

    return 0;
}