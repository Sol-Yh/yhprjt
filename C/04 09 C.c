#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void c040901(){
	int user , com;
	srand((unsigned)time(NULL));
	com = rand() % 3;
	printf("0 : 가위 | 1 : 바위 |  2 : 보 : "); scanf("%d",&user);

	printf("user : %d  |  com : %d\n",user,com);
	if(user == 0){
		if(com == 0){ printf("비김");}
		else if(com == 1){ printf("짐");}
		else{ printf("이김");}
	}
	else if(user == 1){
		if(com == 0){ printf("이김");}
		else if(com == 1){ printf("비김");}
		else{ printf("짐");}
	}
	else{
		if(com == 0){ printf("짐");}
		else if(com == 1){ printf("이김");}
		else{ printf("비김");}
	}
	printf("\n");
}

void c040902(){
	int channel;
	printf("TV채널을 입력하세요 : "); scanf("%d",&channel);

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

main(){
	c040902();
}
