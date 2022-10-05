#include <stdio.h>

double score=999;
int a;

int main(void){
	while(score > 100 | score < 0){
		
		printf("grade:");
		scanf("%lf",&score);
		a=score/10;
	}

	switch(a){
		
		case 10:
		case 9:
			printf("grade:A\n");
			break;
		
		case 8:
			printf("grade:B\n");
			break;
	
		case 7:
			printf("grade:C\n");
			break;
	
		case 6:
			printf("grade:D\n");
			break;
	
		default:
			printf("grade:E\n");
			break;
	}

	return 0;
		
}
