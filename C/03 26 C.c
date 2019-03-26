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
	result = a++ + b;				//result에 a + b값을 대입한 후 a를 1증가시킴  # 16을 만들고 싶다면 result = ++a + b;
	printf("result : %d\n",result);			//result 출력  || 결과 : 15
	result = a *= b + 1;				//result에 a*b+1 값을 넣는데 b+1 이 먼저 계산된 후 a값을 곱함
	printf("result : %d\n",result); 		//result 출력  || 결과 : 66 
	//a++ = 10;					//###에러 남 : 대입 시 대입되는 대상은 변수만 가능
}

void c032604(){					//@관계연산자,비교연산자
	/*
		>,<,>=,<=,==,!=    :    a>b , a<b , a>=b , a<=b , a와 b가 같다 , a와 b가 같지않다.
	*/
	printf("%d\n",10>5);			//출력  ||  10인 a가 5인 b보다 크므로   true값인 1출력
	printf("%d\n",10<5);			//출력  ||  10인 a가 5인 b보다 작으므로 false값인 0출력

	printf("===AND===\n");
	printf("%d\n",(2>1) && (2>1));		//출력  ||  AND : TRUE   #AND는 하나라도 거짓이라면 거짓
	printf("%d\n",(2>1) && (2<1));		//출력  ||  AND : FALSE
	printf("%d\n",(2<1) && (2>1));		//출력  ||  AND : FALSE
	printf("%d\n",(2<1) && (2<1));		//출력  ||  AND : FALSE

	printf("===OR===\n");
	printf("%d\n",(2>1) || (2>1));		//출력  ||  OR : TRUE    #OR는 하나라도 참이라면 참
	printf("%d\n",(2>1) || (2<1));		//출력  ||  OR : TRUE
	printf("%d\n",(2<1) || (2>1));		//출력  ||  OR : TRUE
	printf("%d\n",(2<1) || (2<1));		//출력  ||  OR : FALSE

	printf("===NOT===\n");
	printf("%d\n",!(2>1));			//출력  ||  NOT : FALSE  #NOT은 거짓은 참, 참은 거짓으로
	printf("%d\n",!(2<1));			//출력  ||  NOT : TRUE

	printf("===OTHER===\n");
	printf("%d\n",!10 < 5);			//출력  ||  !10은 0을 제외한 모든값은 참이므로 거짓으로 바뀌고 0<5이므로 TURE인 1출력
}

void c032605(){					//@ 3항 연산자
	int a=10,b=5,max;			//정수형 변수 a=10,b=5로 초기화 , max 선언 
	max = (a>b) ? a : b;			//3항 연산자  max에 a>b가 true면 a 대입 아니면 b 대입
	printf("최대값 : %d",max);		      //출력  ||  max출력 10나옴
}

void c032606(){							//@ test
	int a,b,c,max;						     //정수형 변수 a,b,c,max 선언
	printf("첫번째 수 입력 : "); scanf_s("%d",&a);		//a값 받기
	printf("두번째 수 입력 : "); scanf_s("%d",&b);		//b값 받기
	printf("세번째 수 입력 : "); scanf_s("%d",&c);		//c값 받기
	max = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);//a>b중 큰 값을 c와 비교해서 최종 최대값 도출
	printf("최대값 : %d\n",max);			//출력  || 최대값 출력
}

main(){
	c032601();
	c032602();
	c032603();
	c032604();
}
