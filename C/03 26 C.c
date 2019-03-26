#include <stdio.h>

void test01(){
	int a,b;    					//정수형 변수 a,b 선언
	printf("첫번째 수 입력 : "); scanf_s("%d",&a);   //a값 받기
	printf("두번째 수 입력 : "); scanf_s("%d",&b);   //b값 받기
	printf("목 : %d  |  나머지 : %d\n",a/b,a%b);     // a/b = a÷b    ||   a%b = a÷b의 나머지
}
main(){
	test01();
}
