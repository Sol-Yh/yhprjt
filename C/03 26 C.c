#include <stdio.h>

void test01(){
	int a,b;
	printf("첫번째 수 입력 : "); scanf("%d",&a);
	printf("두번째 수 입력 : "); scanf("%d",&b);
	printf("목 : %d  |  나머지 : %d\n",a/b,a%b);
}
main(){
	test01();
}
