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

void c040203(){						//짝수 홀수 판별 
	int x;						//변수 선언
	printf("정수 입력:"); scanf("%d",&x);
	if(x%2 == 0){					//x / 2 의 나머지가 0이면 짝수
		printf("짝수입니다.\n");
	}
	else{						//x / 2 의 나머지가 0이 아니면 짝수
		printf("홀수입니다.\n");
	}
}

void c040204(){					//양수 음수 0 판별코드
	int x;
	printf("정수 입력:"); scanf("%d",&x);	
	if(x>0) printf("양수\n");		//0보다 크면 양수
	else if(x==0) printf("제로\n");		//0과 같으면 제로
	else printf("음수\n");			//0보다 작으면 음수
}

void c040205(){					//등급매기기
	int x;
	printf("정수 입력:"); scanf("%d",&x);
	if(x>=90) printf("A\n");		//90이상 A
	else if(x>=80) printf("B\n");		//90미만 80이상 B
	else if(x>=70) printf("C\n");		//80미만 70이상 C
	else if(x>=60) printf("D\n");		//70미만 60이상 D
	else printf("F\n");			//60미만 F
}

void c040206(){					//윤년, 월별 마지막일 수
	int year;
	int month;

	printf("년도 입력:"); scanf("%d",&year);
	printf("월 입력:"); scanf("%d",&month);

	if(month == 2){
		if((year%4==0 && year%100 != 0) || year%400 ==0)	
				printf("2월은 29일까지 있습니다\n");
		else		printf("2월은 28일까지 있습니다\n");
	}
	else if(month < 8){
		if(month%2== 1) printf("%d월은 31일까지 있습니다\n",month);
		else		printf("%d월은 30일까지 있습니다\n",month);
	}
	else{
	if(month%2== 0)		printf("%d월은 31일까지 있습니다\n",month);
		else		printf("%d월은 30일까지 있습니다\n",month);
	}
}

void c040207(){			//년도별 띠 찾기
	int year;
	printf("년도 입력:"); scanf("%d",&year);

	printf("%d년생은 ",year);
	if(year % 12 == 0) printf("원숭이");
	if(year % 12 == 1) printf("닭");
	if(year % 12 == 2) printf("개");
	if(year % 12 == 3) printf("돼지");
	if(year % 12 == 4) printf("쥐");
	if(year % 12 == 5) printf("소");
	if(year % 12 == 6) printf("호랑이");
	if(year % 12 == 7) printf("토끼");
	if(year % 12 == 8) printf("용");
	if(year % 12 == 9) printf("뱀");
	if(year % 12 == 10) printf("말");
	if(year % 12 == 11) printf("양");
	printf("띠입니다.\n");
}

void c040208(){

	int x,r;
	srand(time(NULL));
	r = rand() % 10 +1;

	printf("1~10중에 몇일까요 : "); scanf("%d",&x);

	if(x == r)
		printf("이걸 맞추네.\n");
	else
		printf("틀렸습니다.\n");
	printf("답은 %d\n",r);
}

void c040209(){			//100전 100패

	int x,r;
	srand(time(NULL));
	r = rand() % 10 +1;

	printf("1~10중에 몇일까요 : "); scanf("%d",&x);

	if(x == r)
	{
		r = x-1;
		printf("틀렸습니다.\n");
	}
	else
		printf("틀렸습니다.\n");
	printf("답은 %d\n",r);
}

main(){
	c040201();
	c040202();
	c040203();
	c040204();
	c040205();
	c040206();
	c040207();
	c040208();
	c040209();
}
