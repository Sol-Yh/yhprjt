#include <stdio.h>

void c032601(){  					//@두 수 입력 받아서 몫과 나머지 구하는 프로그램
	int a,b;     					//정수형 변수 a,b 선언
	printf("첫번째 수 입력 : "); scanf_s("%d",&a);   //a값 받기
	printf("두번째 수 입력 : "); scanf_s("%d",&b);   //b값 받기
	printf("목 : %d  |  나머지 : %d\n",a/b,a%b);     // a/b = a÷b    ||   a%b = a÷b의 나머지
}

void c032602(){         		//@증감 연산자
	int a=10;			//정수형 변수 a 선언해서 초기값 10으로 설정
	++a;				//a에 1증가  || a++; , a+=1; , a = a+1; 과 같음
	--a;				//a에 1감소  || a--; , a-=1; , a = a-1; 과 같음
	printf("%d\n",a++); 		//a출력  || 결과 : 10   # 출력시킨 후 a를 증가  # ++a 사용 시 증가 후 출력
	printf("%d\n",a);   		//a출력  || 결과 : 11
}

void c032603(){						//@증감 연산자
	int a=10 , b=5 , result;			//정수형 변수 a=10,b=5로 초기화 , result 선언
	result = a++ + b;				//result 에 a + b값을 대입한 후 a를 1증가시킴  # 16을 만들고 싶다면 result = ++a + b;
	printf("result : %d\n",result);			//result 출력  || 결과 : 15
}

void c032604(){
	
}

main(){
	c032604();
}
