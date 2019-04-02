#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){

	srand(time(NULL));
	int x;
	int random = rand() % 10 +1;

	printf("1~10중에 몇일까요"); scanf("%d",&x);

	if(x == random)
		printf("이걸 맞추네.\n");
	else
		printf("틀렸습니다.\n");
}
