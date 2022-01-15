#include <stdio.h>
int main() {

    char arr[50];
    int index = 0;
    scanf("%s", arr);
    
    while (1)
    {
        if(arr[index] == '\0') {
            break;
        }
        printf("%c", arr[index]);
        index++;
    }
    
    printf("\n");
    printf("index = %d \n", index);

    return 0;
}