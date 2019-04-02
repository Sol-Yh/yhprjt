#include <stdio.h>

#define cst 5						//매크로 상수 || X를 5로 상수 정의

void c040201(){						//상수
	const double PI = 3.141592;			//상수 선언 || 변수명 아에 const 사용 시 상수로 적용
	int r= 5;					//변수 선언 ||
	//PI = 3.14;					//ERROR     || 상수는 변수처럼 값 변경 불가능
	printf("%lf %d\n",r*r*PI,cst);			//원의 넓이 구하기 , 매크로 상수 출력
}

void c040202(){						//택일문 (조건문)
	int age;					//변수 선언
	printf("말보루 하나요\n");
	printf("나이를 입력:"); scanf("%d",&age);        //나이 받기

	// #if문 01					@@if문에서 실행할 내용이 2줄 이상이면 {중괄호}안에 묶어줘야함
	if(age>=20){					//나이가 20살 이상이면
		printf("4500원이요\n");
		printf("술은 안필요해요?\n");
	}
	else{						//나이가 20살 미만이면
		printf("안팔아요\n");
	}
	/////////////////////////////////////////////   @@if문 01 == if문 02
	// #if문 02
	/*if(age>=20){					//나이가 20살 이상이면
		printf("4500원이요\n");
	}
	if(age<20){					//나이가 20살 미만이면
		printf("안팔아요\n");
	}								  */
}

void c040203(){						//짝수 홀수 
	int x;						//변수 선언
	printf("정수 입력:"); scanf("%d",&x);
	if(x%2 == 0){					//x / 2 의 나머지가 0이면 짝수
		printf("짝수입니다.\n");
	}
	else{						//x / 2 의 나머지가 0이 아니면 짝수
		printf("홀수입니다.\n");
	}
}

void c040204(){
	int x;
	printf("정수 입력:"); scanf("%d",&x);	
	if(x>0) printf("양수\n");			//0보다 크면 양수
	else if(x==0) printf("제로\n");		//0과 같으면 제로
	else printf("음수\n");			//0보다 작으면 음수
}

main(){
	c040203();
}
