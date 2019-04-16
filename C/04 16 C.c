#include <stdio.h>

void c041601(){
	//===== for 2^10 =====
	int vlu=1;
	int i;
	for(i=1; i<=10; i++){
		vlu*=2;
		printf("2 ^ %d  ||  %d\n",i,vlu);
	}
	//===== for 2^10 =====

	printf("===================\n");
	//===== while 2^10 =====
	i=1;
	vlu=1;
	while(i<=10){
		vlu*=2;
		printf("2 ^ %d  ||  %d\n",i,vlu);
		i++;
	}
	//===== while 2^10 =====
	printf("===================\n");
	printf("%d\n",1<<10);
}

void c041602(){
	int n = 100;
	int vlu = 0;
	int i;
	for(i=1; i<=n; i++){  //증감식 i+=2 사용시 홀수의 합 사용가능
		vlu += i;
		printf("%d\n",vlu);
	}
	printf("===================\n");

	// n * (n + 1) / 2
	printf("%d\n",n * (n + 1) / 2);
}

void c041603(){
	//초기화
	int n = 100; //몇까지할껀데
	int vlu = 0;
	int i;
	//초기화

	printf("===================1~100중 짝수의 합 (for)\n");
	for(i=1; i<=n; i++){
		if(i%2==0){		// i%2==1  = 홀수
				vlu += i;
				printf("%d\n",vlu);
		}
	}
	printf("===================1~100중 짝수의 합 (while)\n");

	vlu=0;
	i=1;
	while(i<=n){
		if(i%2==0){		// i%2==1  = 홀수
				vlu += i;
				printf("%d\n",vlu);
		}
		i++;
	}
	printf("===================2의 배수, 3의 배수 (for)\n");
	vlu=0;
	i=1;
	for(i=1; i<=n; i++){
		if(i%2==0 || i%3==0){	//i%2==0 && i%3==0  =  2의 배수이면서 3의 배수인것만
				vlu += i;
				printf("%d || %d\n",i,vlu);
		}
	}
	printf("===================2의 배수, 3의 배수 (while)\n");
	vlu=0;
	i=1;
	while(i<=n){
		if(i%2==0 || i%3==0){	//i%2==0 && i%3==0  =  2의 배수이면서 3의 배수인것만
				vlu += i;
				printf("%d || %d\n",i,vlu);
		}
		i++;
	}
}

void c041604(){
	int x,y;
	printf("첫번째 수 입력 : "); scanf("%d",&x);
	printf("두번째 수 입력 : "); scanf("%d",&y);
	if(x%y==0)	
		printf("두번째 수(%d)는 첫번째 수(%d)의 약수입니다\n",y,x);
	else 
		printf("두번째 수(%d)는 첫번째 수(%d)의 약수가 아닙니다\n",y,x);
}

void c041605(){
	int x;
	int i;
	printf("약수구할 수 입력 : "); scanf("%d",&x);
	printf("==%d의 약수==\n",x);
	for(i=1; i<=x; i++){
		if(x%i==0){
			printf("%d\n",i);
		}
	}
	
}
main(){
	c041605();
}
