#include <stdio.h>			       //표준입출력 헤더파일 포함

void ByteCheck(){                              //변수별 바이트
	printf("%d Byte \n",sizeof(int));      //출력 함수 | 정수형 4바이트
	printf("%d Byte \n",sizeof(float));    //출력 함수 | 실수형 4바이트
	printf("%d Byte \n",sizeof(double));   //출력 함수 | 실수형 8바이트
	printf("%d Byte \n",sizeof(char));     //출력 함수 | 문자형 1바이트
	printf("=====ByteCheck=====\n");
}

void variable(){                                //변수 선언법
	//int score;				//변수 선언 | 정수형 점수
	//float height;				//변수 선언 | 실수형 키
	//double weight;			//변수 선언 | 실수형 몸무게
	//int clas num;				//변수 선언 | #변수명 띄어쓰기 불가능 
	//int 8GB		                //변수 선언 | #변수명 첫글자 숫자 불가능
	//int man,Man,Man;			//변수 선언 | #변수명 대소문자 구분하므로 세가지 다 선언 가능
	//int if,else;				//변수 선언 | #변수명 예약어 사용 불가능 ex)int,void,printf...
	printf("=====variable=====\n");
}

void init(){                                            //변수 선언 및 초기화
	int jumsu;			                //변수 선언 | 정수형 점수
	float height;					//변수 선언 | 실수형 키
	jumsu = 100;					//변수 초기화 | 점수
	height = 175.0;					//변수 초기화 | 키
	printf("+++%d+++\n",100);		        //출력 함수 | 100출력
	printf("+++%d+++\n",10+20);		        //출력 함수 | 10+20 = 30출력
	printf("+++점수 : %d+++\n",jumsu);	        //출력 함수 | jumsu변수 출력
	printf("+++키   : %.1f+++\n",height);	        //출력 함수 | height변수 출력 # %.1f : 소숫점 아래 한자리까지
	printf("=====init=====\n");
}

main(){			//메인 함수 #한프로젝트에 여러 메인함수 존재 시 충돌가능
	//테스트 문제
	int kor = 80;
	int eng = 70;
	int math = 40;

	int sum = kor+eng+math;
	float avg = sum/3;

	printf("국어 : %d\n",kor);
	printf("영어 : %d\n",eng);
	printf("수학 : %d\n",math);
	printf("총점 : %d\n",sum);
	printf("평균 : %.1f\n",avg);
	printf("===Test===\n");
	//테스트 문제

	ByteCheck();  //바이트체크
	variable();   //변수선언
	init();   //변수초기화
}
