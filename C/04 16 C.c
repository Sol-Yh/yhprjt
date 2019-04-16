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
	int n = 100;
	int vlu = 0;
	int i;
	for(i=1; i<=n; i++){
		if(i%2==0){		// i%2==1  = 홀수의 합
				vlu += i;
				printf("%d\n",vlu);
		}
	}
	printf("↑for===================↓while\n");
	vlu=0;
	i=1;
	while(i<=n){
		if(i%2==0){		// i%2==1  = 홀수
				vlu += i;
				printf("%d\n",vlu);
		}
		i++;
	}
}
main(){
	c041603();
}
