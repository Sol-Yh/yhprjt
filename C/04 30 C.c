#include<stdio.h>

void c1904301(){
	int x,y;
	for(x=10; x>=1; x--){
		for(y=1; y<=10; y++){
			if(y<x){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
		printf("\n");
	}
}

void c1904302(){
	int x;
	int i,j,sum=0;
	printf("정수를 입력 : ");
	scanf("%d",&x);
	for(i = 1; i<=x; i++){
		sum+=i;
		for(j = 1; j<=i; j++){
			if(j==i)
				printf("%d = ",j);
			else
				printf("%d + ",j);
		}
		printf("%d \n",sum);
	}
}

void c1904303(){
	int x;
	int i,j,sum=0;
	printf("정수를 입력 : ");
	scanf("%d",&x);
	for(i = 1; i<=x; i++){
		sum+=i;
		for(j = 1; j<=i; j++){
			if(i==1) printf("%d = ",j);
			else{
				if(j==1)
					printf("%d + ...",j);
				if(j==i)
					printf(" + %d = ",j);
				else
					continue;
			}
		}
		printf("%d \n",sum);
	}
}

void c1904304(){
	int s;
	int x;
	while(1){
		printf("막대의 길이(종료 : -1) : ");
		scanf("%d",&s);
		if(s==-1) break;
		for(x=1; x<=s; x++){
			printf("*");
		}
		printf("\n");
	}

}

void c1904305(){
	int month,day;
	int x=1;
	int dayC=0;
	int dayM;

	printf("월을 입력 :  ");scanf("%d",&month);
	printf("요일을 입력 :  ");scanf("%d",&day);

	printf(" Sun Mon Tue Wed Thu Fri Sat\n");
	
	if(month == 2){ //28
		dayM=28;
	}
	else if(month < 8){
		if(month%2== 1) { //31
			dayM=31;
		} 
		else {            //30
			dayM=30;
		}
	}
	else{
		if(month%2== 0)	{ //31
			dayM=31;
		}
		else { //30
			dayM=30;
		}
	}

	while(1){
		if(dayC == dayM) break;
		if(x<day+1){
				printf("    ");
		}
		else{ 
			printf("%4d",dayC+1);
			dayC++;
		}
		if(x%7==0) printf("\n");
		x++;
	}
		printf("\n");
}

void cFBNC(){
	/*
			   if n=0 : 0
		F(n) = if n=1 : 1
			      n   : F(n-1)+F(n-2)
	*/
	int fbnc; //피보나치 수열 항
	int i=1;  
	int x=0,y=1,z;
	printf("======201907013======\n");
	printf("X번째 항까지 출력 : "); scanf("%d",&fbnc); //피보나치 수열 항 입력받기
	if(fbnc == 0){	//피보나치 수열의 항이 0인경우 결과값을 0만 출력하기 위해 사용
		printf("[0");
	}
	else{
		printf("[%d , %d",x,y);
		for(i; i<fbnc; i++){
			z = x+y;		// F(n) : F(n-1)+F(n-2)
			printf(" , %d",z);
			x=y;
			y=z;
		}
	}
	printf("]\n");
}

main(){
	c1904301();
	//피보나치 수열 Q12 : 저장명 학번이름 || hijinsu@naver.com
}
