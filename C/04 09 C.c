#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void c040901(){
	int user , com;
	srand((unsigned)time(NULL));
	com = rand() % 3;
	printf("0 : 가위 | 1 : 바위 |  2 : 보 : "); scanf_s("%d",&user);

	printf("user : %d  |  com : %d\n",user,com);
	if(user == 0){
		if(com == 0) printf("비김");
		else if(com == 1) printf("짐");
		else printf("이김");
	}
	else if(user == 1){
		if(com == 0) printf("이김");
		else if(com == 1) printf("비김");
		else printf("짐");
	}
	else{
		if(com == 0) printf("짐");
		else if(com == 1) printf("이김");
		else printf("비김");
	}
	printf("\n");
}

void c040902(){
	int channel;
	printf("TV채널을 입력하세요 : "); scanf_s("%d",&channel);

	switch(channel){
	case 5 : printf("SBS"); break;
	case 7 :
	case 9 : printf("KBS"); break;
	case 11 : printf("MBC"); break;
	case 13 : printf("EBS"); break;
	case 51 : printf("OGN"); break;
	default : printf("나도 모르겠습니다");
	}
	printf("\n");
}

void c040903(){
	char ip;
	printf("모음을 입력하세요 : "); scanf_s("%c",&ip);
	switch(ip) {
	case 'a' : printf("아"); break;
	case 'e' : printf("에"); break;
	case 'i' : printf("이"); break;
	case 'o' : printf("오"); break;
	case 'u' : printf("우"); break;
	default : printf("모음 맞냐?");
	}
	printf("\n");
}

void c040904(){
	int score;
	printf("점수를 입력하세요 : "); scanf_s("%d",&score);
	switch(score/10){
	case 10 :
	case 9 : printf("A"); break;
	case 8 : printf("B"); break;
	case 7 : printf("C"); break;
	case 6 : printf("D"); break;
	default : printf("F"); break;
	}
	printf("\n");
}

void c040905(){
	int num;
	printf("숫자를 입력하세요 : "); scanf_s("%d",&num);
	switch (num > 0){
        case 1: printf("%d는 양수입니다.", num); break;
        case 0:
            switch (num < 0){
                case 1: printf("%d는 음수입니다.", num); break;
                case 0: printf("%d는 0입니다", num); break;
            }
    }
	printf("\n");
}

void c040906(){
	int x = 1;
	for(x = 10; x>=1; x--){
		printf("%d\n",x);
	}
}

void c040907(){
	int i = 1;
	while(i<10){
		printf("%d\n",i);
		i++;
	}
}

void c040908(){  //최소 한번은 실행됨
	int i = 1;
	do{
		printf("%d\n",i);
		i++;
	} while(i>10);
}

main(){
	
	c040908();
}
