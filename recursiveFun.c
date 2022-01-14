#include <stdio.h>

void recursive(int num) {
    if(num < 0) {
        return;
    } else {
        printf("recursive call !! num = %d \n", num);
        recursive(num-1);
    }
}

int main() {

    recursive(5);

    return 0;
}