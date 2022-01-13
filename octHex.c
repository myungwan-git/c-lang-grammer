#include <stdio.h>
int main() {

	int num1 = 7, num2 = 13;
	
	// 8진수 출력 #을 넣으면 출력된 값의 진수표현을 같이 해준다.
	printf("%o \n%#o \n", num1, num2);
	printf("%x \n%#x \n", num2, num2);
	printf("-------------- \n");

	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);
	
	// 소수점 이하 6자리에서 반올림
	printf("%f \n", 0.12345678);

	printf("%e \n", 0.12345678);
	
  return 0;
}