#include <stdio.h>

void change3Arr(int (*param)[3]) {
    printf("%p \n", param);
    *param[1] *= 10;
    param[1][2] *= 100;
    printf("param[2][2] = %d \n", param[1][2]);
}

int main() {

    int arr[2][3] = {
                        {1,2,3},
                        {4,5,6}
                    };
    printf("%p \n", arr);
    change3Arr(arr);

    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}